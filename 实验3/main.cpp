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
    int Newcases[2000]; // ���ǰʮ����ÿ�������ǰһ���������
public:
    Epidemic() {
        // �����ʼ��Newcases����
        random_device rd;
        mt19937 gen(rd());
        uniform_int_distribution<> dis(0, 100);
        for (int i = 0; i < 2000; ++i) {
            Newcases[i] = 2*(i+1)-1;
            cout << Newcases[i] << endl;
        }
    }
    // ������Ԥ�⺯�������ؽ��������������
    int Forecast() {
        double input[2000];
        copy(Newcases + 1, Newcases + 2000, input);
        int max= Preprocess(input, 1999);
        
        // ����������
        const int inputnodes = 2000;
        const int hidenodes = 256;
        const int outputnodes = 1;
        //Ȩ�ؾ���
        double w1[inputnodes][hidenodes];
        double w2[hidenodes][outputnodes];
        //�������
        double output;
        //�����ʼ��Ȩ�ؾ���
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
        const  int epochs = 1000; // ѵ������
        const double learnrate =0.001; // ѧϰ��
        //���ز�����
        double hideoutput[hidenodes];
        for (int i = 0; i < epochs; i++) {
            for (int i = 0; i < hidenodes; i++) {
                double sum = 0;
                for (int j = 0; j < inputnodes; j++) {
                    sum += input[j] * w1[j][i];
                }
                hideoutput[i] = 1.0 / (1.0 + exp(-sum));//sigmoid��������
            }

            double sum1 = 0;
            for (int i = 0; i < hidenodes; i++)
            {
                sum1 += hideoutput[i] * w2[i][0];
            }
            //sigmoid��������sum1;
            output = 1.0 / (1.0 + exp(-sum1));

            double error = pow(output - input[0], 2);//���������
            if (error < 0.01) {
                break;
            }
            //�����ݶ�,������Ȩ��

            double outputgrad;
            double hidegrad;
            //�������ص������Ȩ��
            for (int i = 0; i < hidenodes; i++) {
                outputgrad = error * hideoutput[i];
                w2[i][0] -= learnrate * outputgrad;
                if (w2[i][0] < -1)w2[i][0] = -1;
                if (w2[i][0] > 1)w2[i][0] = 1;
            }
            //�������뵽���ز�Ȩ��
            for (int j = 0; j < inputnodes; j++) { //����ÿ������ڵ�
                for (int i = 0; i < hidenodes; i++) {  //����ÿ�����ؽڵ�
                    hidegrad = error * w2[i][0] * hideoutput[i] * (1 - hideoutput[i]) * input[j];
                    w1[j][i] -= learnrate * hidegrad;   //����Ȩ��
                    if (w1[j][i] < -1)w1[j][i] = -1;
                    if (w1[j][i] > 1)w1[j][i] = 1;
                }
            }
        }
        //�������յ�Ȩ��Ԥ�⴫��

        double x[2000];
        copy(Newcases, Newcases + 1999, x);
        int max1=Preprocess(x, 1999);

        for (int i = 0; i < hidenodes; i++) {
            double sum = 0;
            for (int j = 0; j < inputnodes; j++) {
                sum += Newcases[j] * w1[j][i];
            }
            hideoutput[i] = 1.0 / (1.0 + exp(-sum));//sigmoid����
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
    // ����Epidemic����
    Epidemic epidemic;

    // ����Ԥ�⺯��
    int prediction = epidemic.Forecast();

    // ���Ԥ���������н��
    cout << "Prediction: " << prediction << endl;

    return 0;
}
