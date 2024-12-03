#define LIST_INIT_SIZE 100
#define LISTINCREMENT 10
#include<stdlib.h>
#include<iostream>
using namespace std;
//˳��ջ
class stack {
	int* elem;
	int top;
public:
	void create();
	int gettop();
	void push(int e);
	int pop();

};

void stack::create() {
	elem = (int*)malloc(sizeof(int) * 10);
	top = 0;
}
int stack::gettop() {
	if (top == 0) {
		return 0;
	}
	return *(elem + top-1);
}
void stack::push(int e) {
	if (top == 10) {
		cout << "man";
		return;
	}
	*(elem + top) = e;//ע��������gettop��ͬ������Ҫ��һ��ֻ���������Ҫ��һ
	top++;
}
int stack::pop() {
	//�ڴ��ǲ����ͷŵ�
	int e;
	if (top == 0) {
		return 0;
	}
	e = *(elem + top - 1);
	top--;
	return e;
}
//int main() {
//	stack s;
//	s.create();
//	for (int i = 0; i < 5; i++) {
//		s.push(i);
//	}
//	for (int j = 0; j < 5; j++) {
//		cout<<s.pop();
//	}
//	return 0;
//}



//��ջ
struct node {
	int data;
	node* next;
};
class linkstack {
	node* top;
	int length;
public:
	void create();
	void push(int i);
	int gettop();
	int pop();
};
void linkstack::create() {//Ӧ���ù��캯�����������ø���
	top = nullptr;
	length = 0;
}
void linkstack::push(int e) {
	node* p = (node*)malloc(sizeof(node));
	p->data = e;
	p->next = top;
	top = p;
	length++;
}
int linkstack::gettop() {
	if (length == 0) {
		return 0;
	}
	return(top->data);//��ջ����Ҫͷ���
}
int linkstack::pop() {
	if (length == 0) {
		return 0;
	}
	node* q = top;
	int e = q->data;
	top = top->next;
	//��ջ�����ͷ��ڴ�
	free(q);
	length--;
	return e;
}
//int main() {
//	linkstack s;
//	s.create();
//	for (int i = 0; i < 5; i++) {
//		s.push(i);
//	}
//	for (int i = 0; i < 5; i++) {
//		cout<<s.pop();
//	}
//	return 0;
//}