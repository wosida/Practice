#include<stdlib.h>
#include<iostream>
using namespace std;
//裢队
struct node {
	int data;
	node* next;
};
class linkqueue {
	node* front;
	node* rear;
public:
	void init();
	void enqueue(int e);
	int getqueue();
	int getlength();
};
int linkqueue::getlength() {
	return front->data;
}
void linkqueue::init() {
	front = (node*)malloc(sizeof(node));//类似于有一个头结点
	rear = front;
	front->next = nullptr;
	front->data = 0;
}
void linkqueue::enqueue(int e) {//从队尾入队
	node* p = (node*)malloc(sizeof(node));
	p->data = e;
	rear->next = p;
	rear = p;
	front->data++;
}
int linkqueue::getqueue() {//从队头出队
	int e = front->next->data;
	node* p = front->next;
	front->next = p->next;
	free(p);
	front->data--;
	return e;
}
//int main() {
//	linkqueue q;
//	q.init();
//	for (int i = 1; i <= 5; i++) {
//		cout << i<<" ";
//		q.enqueue(i);
//	}
//	cout << q.getlength()<<endl;
//	for (int j = 0; j < 5; j++) {
//		cout << q.getqueue()<<" ";
//	}
//	cout << q.getlength();
//	return 0;
//}


//循环队列
# define maxsize 5
class queue {
	int* base;
	int front;
	int rear;
public:
	queue();
	int length();
	void enqueue(int e);
	int dequeue();
};
queue::queue() {//构造空队列
	base = (int*)malloc(sizeof(int)*maxsize);//少用一个元素空间
	front = 0;
	rear = 0;
}
int queue::length() {
	return (rear - front+maxsize)%maxsize;//加一是因为少用了一个元素空间
}
void queue::enqueue(int e) {
	if ((rear + 1) % (maxsize) == front) {
		return;
	}
	base[rear] = e;
	rear = (rear + 1) % maxsize;
}
int queue::dequeue() {
	if (front == rear) {
		return 0;
	}
	int e = base[front];
	front = (front + 1) % maxsize;
	return e;
}
//int main() {
//	queue q;
//	cout << q.length()<<endl;
//	for (int i = 1; i <= 5; i++) {
//		q.enqueue(i);
//	}
//	cout << q.length() << endl;
//	for (int j = 0; j < 4; j++) {//maxsize是5，但是能存储的只有4位
//		cout<<q.dequeue() << " ";
//	}
//	cout << endl << q.length();
//	return 0;
//
//}
