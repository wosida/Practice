#include<iostream>
#include<string>
using namespace std;
class product {
private:
	int num;
	int quantity;
	double price;
	static double discount;
	static double sum;
	static int n;
public:
	product(int m, int q, double p) {
		num = m;
		quantity = q;
		price = p;
	}
	void total();
    double static ave();
	void static display();
};
void product::total() {
	double rate = 1.0;
	if (quantity > 10) {
		rate = rate * 0.98;
	}
	sum = sum + quantity * price * rate * (1 - discount);
	n += quantity;
}
double product::ave() {
	return(sum / n);
}
void product::display() {
	cout << "总销售额为"<<sum << endl <<"平均售价为"<< ave() << endl;
}
int product::n = 0;
double product::sum = 0;
double product::discount = 0.1;
int main() {
	product a[3] = { product(101,5,23.5),product(102,12,24.5),product(103,100,21.5) };
	for (int i = 0; i < 3; i++) {
		a[i].total();
	}
	product::display();
	return 0;
}