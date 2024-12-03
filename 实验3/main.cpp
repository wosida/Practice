#include <iostream>
#include <random>
#include <cmath>

using namespace std;
int Preprocess(double* input, int size) {
    double max_value = *max_element(input, input + size);
    for (int i = 0; i < size; i++) {
        input[i] /= max_value;
    }
    return max_value;
}
double Postprocess(double output, double* input, int size,int max_value) {
    for (int i = 0; i < size; i++) {
        input[i] *= max_value;
   }
    return output * max_value;
}


class Epidemic {
private:
    int Newcases[2000]; // 存放前十五天每天相对于前一天的新增数
public:
    Epidemic() {
        // 随机初始化Newcases数组
        random_device rd;
        mt19937 gen(rd());
        uniform_int_distribution<> dis(0, 100);
        for (int i = 0; i < 2000; ++i) {
            Newcases[i] = 2*(i+1)-1;
            cout << Newcases[i] << endl;
        }
    }
    // 神经网络预测函数，返回今天的新增病例数
    int Forecast() {
        double input[2000];
        copy(Newcases + 1, Newcases + 2000, input);
        int max= Preprocess(input, 1999);
        
        // 构建神经网络
        const int inputnodes = 2000;
        const int hidenodes = 256;
        const int outputnodes = 1;
        //权重矩阵
        double w1[inputnodes][hidenodes];
        double w2[hidenodes][outputnodes];
        //输出变量
        double output;
        //随机初始化权重矩阵
        random_device rd;
        mt19937 gen(rd());
        uniform_int_distribution<> dis(-1.0, 1.0);
        for (int i = 0; i < inputnodes; i++) {
            for (int j = 0; j < hidenodes; j++) {
                w1[i][j] = (rand() / (RAND_MAX + 1.0)) - 0.5;
            }
        }
        for (int i = 0; i < hidenodes; i++) {
            for (int j = 0; j < outputnodes; j++) {
                w2[i][j] = (rand() / (RAND_MAX + 1.0)) - 0.5;
            }
        }
        const  int epochs = 1000; // 训练次数
        const double learnrate =0.001; // 学习率
        //隐藏层的输出
        double hideoutput[hidenodes];
        for (int i = 0; i < epochs; i++) {
            for (int i = 0; i < hidenodes; i++) {
                double sum = 0;
                for (int j = 0; j < inputnodes; j++) {
                    sum += input[j] * w1[j][i];
                }
                hideoutput[i] = 1.0 / (1.0 + exp(-sum));//sigmoid函数激活
            }

            double sum1 = 0;
            for (int i = 0; i < hidenodes; i++)
            {
                sum1 += hideoutput[i] * w2[i][0];
            }
            //sigmoid函数激活sum1;
            output = 1.0 / (1.0 + exp(-sum1));

            double error = pow(output - input[0], 2);//均方差误差
            if (error < 0.01) {
                break;
            }
            //计算梯度,并更新权重

            double outputgrad;
            double hidegrad;
            //更新隐藏到输出层权重
            for (int i = 0; i < hidenodes; i++) {
                outputgrad = error * hideoutput[i];
                w2[i][0] -= learnrate * outputgrad;
                if (w2[i][0] < -1)w2[i][0] = -1;
                if (w2[i][0] > 1)w2[i][0] = 1;
            }
            //更新输入到隐藏层权重
            for (int j = 0; j < inputnodes; j++) { //遍历每个输入节点
                for (int i = 0; i < hidenodes; i++) {  //遍历每个隐藏节点
                    hidegrad = error * w2[i][0] * hideoutput[i] * (1 - hideoutput[i]) * input[j];
                    w1[j][i] -= learnrate * hidegrad;   //更新权重
                    if (w1[j][i] < -1)w1[j][i] = -1;
                    if (w1[j][i] > 1)w1[j][i] = 1;
                }
            }
        }
        //利用最终的权重预测传播

        double x[2000];
        copy(Newcases, Newcases + 1999, x);
        int max1=Preprocess(x, 1999);

        for (int i = 0; i < hidenodes; i++) {
            double sum = 0;
            for (int j = 0; j < inputnodes; j++) {
                sum += Newcases[j] * w1[j][i];
            }
            hideoutput[i] = 1.0 / (1.0 + exp(-sum));//sigmoid函数
        }

        double sum1 = 0;
        for (int i = 0; i < hidenodes; i++)
        {
            sum1 += hideoutput[i] * w2[i][0];
        }
        output = 1.0 / (1.0 + exp(-sum1));

        int outputt = round(Postprocess(output, x, 2000,max1));
        return outputt;
    }
};

int main() {
    // 创建Epidemic对象
    Epidemic epidemic;

    // 调用预测函数
    int prediction = epidemic.Forecast();

    // 输出预测结果和运行结果
    cout << "Prediction: " << prediction << endl;

    return 0;
}
