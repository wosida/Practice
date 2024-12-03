#define LIST_INIT_SIZE 100
#define LISTINCREMENT 10
#include<stdlib.h>
#include<iostream>
using namespace std;
//顺序栈
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
	*(elem + top) = e;//注意和上面的gettop不同，不需要减一，只有这个不需要减一
	top++;
}
int stack::pop() {
	//内存是不能释放的
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



//链栈
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
void linkstack::create() {//应该用构造函数，但是懒得改了
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
	return(top->data);//链栈不需要头结点
}
int linkstack::pop() {
	if (length == 0) {
		return 0;
	}
	node* q = top;
	int e = q->data;
	top = top->next;
	//链栈可以释放内存
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