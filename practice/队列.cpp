#include<stdlib.h>
#include<iostream>
using namespace std;
//�Ͷ�
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
	front = (node*)malloc(sizeof(node));//��������һ��ͷ���
	rear = front;
	front->next = nullptr;
	front->data = 0;
}
void linkqueue::enqueue(int e) {//�Ӷ�β���
	node* p = (node*)malloc(sizeof(node));
	p->data = e;
	rear->next = p;
	rear = p;
	front->data++;
}
int linkqueue::getqueue() {//�Ӷ�ͷ����
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


//ѭ������
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
queue::queue() {//����ն���
	base = (int*)malloc(sizeof(int)*maxsize);//����һ��Ԫ�ؿռ�
	front = 0;
	rear = 0;
}
int queue::length() {
	return (rear - front+maxsize)%maxsize;//��һ����Ϊ������һ��Ԫ�ؿռ�
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
//	for (int j = 0; j < 4; j++) {//maxsize��5�������ܴ洢��ֻ��4λ
//		cout<<q.dequeue() << " ";
//	}
//	cout << endl << q.length();
//	return 0;
//
//}
