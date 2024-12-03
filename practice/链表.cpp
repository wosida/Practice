#define LIST_INIT_SIZE 100
#define LISTINCREMENT 10
#include<stdlib.h>
#include<iostream>
using namespace std;
 struct Node {
	Node* next;
	int data;
};
class linklist {
	Node* head;
public:
	void linklist1();//β�巨����
	void linklist2();//ͷ�巨����
	void insert(int i, int m);
	void print();
	int locate(int m);
	void deletenode(int i);
	int len();
	Node* removeNthFromEnd( int n) {
		Node* p = head;
		int i = 0;
		while (!p) {
			i++;
			p = p->next;
		}
		int j = i - n + 1;
		p = head;
		Node* q;
		for (int m = 0; m < j - 2; m++) {
			p = p->next;
		}
		q = p;
		p = p->next;
		q->next = p->next;
		delete p;
		return head;
	}
};
int linklist::len() {
	return head->data;
}
//��ͷ�ڵ������
void linklist::linklist1() {
	int a;
	head = (Node*)malloc(sizeof(Node));//����ͷ�ڵ�
	head->data = 0;
	head->next = nullptr;
	Node* p=nullptr;
	Node* r;//����һ��ָ��r��Զָ�����һ���ڵ�
	r = head;
	while (cin.peek() != '\n') {//��Ϊ�õ���ѭ������Ҫ��һ���ڵ�ָ�루r��������ѭ����һֱ��ʾ���һ���ڵ㣬
		cin >> a;
		p = (Node*)malloc(sizeof(Node));
		p->data = a;
		r->next = p;
		r = p;
		head->data++;
	}
	p->next = NULL;//��ʵ�������Ͻ�����p����r����ˮ�����ɣ����������ڴ�ʱ��ʵ��ʾ����ͬһ����ַ
}

void linklist::linklist2() {
	int  a;
	head = (Node*)malloc(sizeof(Node));
	head->next = NULL;//��һ��Ҳ����Ҫ����ѭ����һ��ʹ�õ�һ�εĵ�һ���ڵ�Ҳ�����һ���ڵ��nextΪNULL
	Node* p = nullptr;//��һ������ν��ֻ��Ϊ�˽���һ����ʼ������ֹ����
	while (cin.peek() != '\n') {
		cin >> a;
		p = (Node*)malloc(sizeof(Node));
		p->data = a;
		p->next = head->next;//z������˳���ܱ䣬������Ҳ���ԭ���ĵ�һ���ڵ���
		head->next = p;
	}
}

void linklist::insert(int i, int m) {
	Node* p = head->next;
	for (int j = 1; j < i; j++) {//�ҵ�����λ�õ�ǰһ���ڵ�
		p = p->next;
	}
	if (!p || i < 1) {
		return;
	}
	Node* q = (Node*)malloc(sizeof(Node));//������ռ��ǲ��еģ��ᵼ��qû��ָ��ĵ�ַ��ָ��û��ָ��ĵ�ַ��û������
	q->data = m;
	q->next = p->next;
	p->next = q;
}

void linklist::print() {
	Node* p;
	for (p = head->next; p != NULL; p=p->next) {
		cout << p->data<<" ";
	}
	cout << endl;
}
bool compare1(int i,int j) {
	if (i == j) return 1;
	else return 0;
}
int linklist::locate(int m) {
	Node* p = head->next;//����ط���head->next
	int i = 1;
	for (p; p != NULL; p = p->next) {
		if ((*compare1)(p->data, m) == 1) {
			return i;
		}
		i++;
	}
	if (p == NULL) {
		return 0;
	}
}
void linklist::deletenode(int i) {
	Node* p = head->next;//����ط���head��������head->next��headָ�����ͷ�ڵ㣬head->nextָ����ǵ�һ��Ԫ��
	for (int j = 1; j < i; j++) {
		p = p->next;
	}
	if (!p || i < 0) {
		return;
	}
	Node* q = p;//�½�һ��q,Ϊ�˼�¼�ⲿ�ֵ��ڴ棬�����ͷ�
	p->next = p->next->next;//����p->next=q->next;
	free(q);
}
//int main(){
//	linklist L;
//	L.linklist1();
//	L.print();
//	getchar();
//	L.removeNthFromEnd(2);
//	L.print();
	/*L.insert(2, 9);
	L.print();
	int a = L.locate(9);
	cout << a << endl;
	int b = L.locate(4);
	cout << b << endl;
	L.deletenode(2);
	L.print();
	return 0;*/


