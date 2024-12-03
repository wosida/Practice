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
	void linklist1();//尾插法建表
	void linklist2();//头插法建表
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
//有头节点的链表
void linklist::linklist1() {
	int a;
	head = (Node*)malloc(sizeof(Node));//创建头节点
	head->data = 0;
	head->next = nullptr;
	Node* p=nullptr;
	Node* r;//创建一个指针r永远指向最后一个节点
	r = head;
	while (cin.peek() != '\n') {//因为用的是循环，需要有一个节点指针（r）可以在循环中一直表示最后一个节点，
		cin >> a;
		p = (Node*)malloc(sizeof(Node));
		p->data = a;
		r->next = p;
		r = p;
		head->data++;
	}
	p->next = NULL;//其实从意义上讲，把p换成r更加水到渠成，但是两个在此时其实表示的是同一个地址
}

void linklist::linklist2() {
	int  a;
	head = (Node*)malloc(sizeof(Node));
	head->next = NULL;//这一步也很重要，再循环第一次使得第一次的第一个节点也是最后一个节点的next为NULL
	Node* p = nullptr;//这一步无所谓，只是为了进行一个初始化，防止警告
	while (cin.peek() != '\n') {
		cin >> a;
		p = (Node*)malloc(sizeof(Node));
		p->data = a;
		p->next = head->next;//z这两步顺序不能变，否则就找不到原来的第一个节点了
		head->next = p;
	}
}

void linklist::insert(int i, int m) {
	Node* p = head->next;
	for (int j = 1; j < i; j++) {//找到插入位置的前一个节点
		p = p->next;
	}
	if (!p || i < 1) {
		return;
	}
	Node* q = (Node*)malloc(sizeof(Node));//不分配空间是不行的，会导致q没有指向的地址，指针没有指向的地址就没有意义
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
	Node* p = head->next;//这个地方是head->next
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
	Node* p = head->next;//这个地方是head，而不是head->next；head指向的是头节点，head->next指向的是第一个元素
	for (int j = 1; j < i; j++) {
		p = p->next;
	}
	if (!p || i < 0) {
		return;
	}
	Node* q = p;//新建一个q,为了记录这部分的内存，便于释放
	p->next = p->next->next;//或者p->next=q->next;
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


