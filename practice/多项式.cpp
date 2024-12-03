//��ʽ�洢����ʽ
#define LIST_INIT_SIZE 100
#define LISTINCREMENT 10
#include<stdlib.h>
#include<iostream>
using namespace std;
struct node
{
	int exp;
	float coef;
	node* next;
};
class poly {
	node* head;
public:
	void create();
	void print();
	node* gethead();
	int len();
	void sort();//����ð������
	void add(poly p);//����ʽ���
};
node* poly::gethead() {
	return head;
}
void poly::add(poly po) {
	node* p = head->next;
	node* r=nullptr;
	node* q = po.gethead()->next;
	while (p!= nullptr && q != nullptr) {
		if (p->exp == q->exp) {
			p->coef += q->coef;
		/*	if (p->coef == 0) {
				p->next = p->next->next;
				r = p;
				free(r);
			}*/
			p = p->next;
			q = q->next;
		}
		else if (p->exp < q->exp) {
			p = p->next;
		}
		else {
			q = q->next;
		}
	}
	while (q!= nullptr) {//ע������ط���q;
		node* h = (node*)malloc(sizeof(node));
		h->exp = q->exp;
		h->coef = q->coef;
		h->next = nullptr;
		p->next = h;
		q = q->next;
	}
}
int poly::len() {
	return head->exp;
}
void poly::print() {
	node* p = head->next;
	for (p; p->next != nullptr; p = p->next) {
		cout << p->coef << "*x^" << p->exp << "+";
	}
	cout << p->coef << "*x^" << p->exp<<endl;
}
void poly::create() {
	int m;
	float n;
	char y;
	head = (node*)malloc(sizeof(node));
	head->exp = 0;//��ͷ�ڵ��exp���ݵ�������
	head->coef = 0;
	head->next = nullptr;
	node* p;
	node* r;
	r = head;
	while (1) {
		cout << "������ָ��:";
		cin >> m;
		cout << "������ϵ��:";
		cin >> n;
		getchar();
		p = (node*)malloc(sizeof(node));
		if (!p) {
			return ;
		}
		p->exp = m;
		p->coef = n;
		p->next = nullptr;
		r->next = p;
		r = p;
		head->exp++;
		cout << "����q�˳������������";
		cin >> y;
		if (y == 'q') {
			break;
		}
		else cout << endl;
	}
}
void poly::sort() {
	node* p, * q,*r;
	for (int i= 0; i < len()-1; i++) {
		r = head;
		p = head->next;
		q = p->next;
		for (int j = 0; j < len()-1 - i; j++) {
			if (p->exp > q->exp) {
				p->next = q->next;
				q->next = p;
				r->next = q;
			}
		}
		r = r->next;
		p = r->next;
		q = p->next;
    }
}
//int main() {
//	poly pp;
//	pp.create();
//    pp.sort();
//    pp.print();
//	poly qq;
//	qq.create();
//	qq.sort();
//	qq.print();
//	pp.add(qq);
//	pp.print();
//	return 0;
//}