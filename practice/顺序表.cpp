#define LIST_INIT_SIZE 100
#define LISTINCREMENT 10
#include<stdlib.h>
#include<iostream>
using namespace std;

class List {
	int* elem;//顺序表基地址指针
	int length;
	int listsize;
public:
	List();//初始化一个空顺序表
	int getlength();
	int getlistsize();
	void InitLIST();
	int locate(int e, bool (*compare)(int, int));//查找函数，查找第一个满足条件的元素，若存在，返回他的位序
	void insert(int e,int i);//插入元素
	int deleteelem(int i);//删除第i个元素,返回其值
	void destory();
	void print();
};
void List::destory() {
	free(elem);
}
int List::getlistsize() {
	return listsize;
}
int List::getlength() {
	return length;
}
//构造一个空的列表
List::List(){
	elem = (int*)malloc(LIST_INIT_SIZE * sizeof(int));
	
	if (!elem) {
		exit(0);
	}
	cout << elem<<endl;
	length = 0;
	listsize = LIST_INIT_SIZE;
}
// 这种形式隐藏了this指针，可以实现双向传值，就和构造函数相同了
void List::InitLIST() {  //如果是友元函数或带参数的成员函数，传入的参数不是引用的话，无法对L的元素实现真的改变，无法双向传值
	elem = (int*)malloc(LIST_INIT_SIZE * sizeof(int));
	if (!elem) {
		exit(0);
	}
	length = 0;
	listsize = LIST_INIT_SIZE;
}
bool compare(int a, int b) {
	if (a == b)
		return true;
	else return false;
}
int List::locate(int e,bool(*compare)(int,int)) {
	int i = 1;
	int* p = elem;
	while (i<length &&!(*compare)(e,*p++))//这个while循环写的很漂亮，我的第一感觉是直接利用*p是否
		//等于e，但是没有这样代码简洁,注意是小于，而不是小于等于
	{
		i++;
	}
	if (i <= length)return i;
	else return 0;
}
void List::insert(int e,int i) {//在指定位置插入元素，需要先将插入元素后边的元素位置后移，（需要先移动最后一个，
	//再插入当前元素,1<=i<=length+1
	if (i<1 || i>length+1) return;
	if (length == listsize) {
		int* newbase = (int*)realloc(elem, (listsize + LISTINCREMENT) * sizeof(int));
		if (!newbase) exit(0);
		elem = newbase;
		listsize += LISTINCREMENT;
	}
	/*if (length == 0) {
		elem[0] = e;
		length++;
		return;
	}*/
	int* q = &(elem[i - 1]);
	int* p = &(elem[length - 1]);
	for (p;p>=q;p--) {//长度为0时根本无法进入此循环，此时*p=elem[-1],这就是未初始化的内存，但是不妨碍函数实现
		*(p + 1) = *p;
	}
	*q = e;
	length++;
}
int List::deleteelem(int i){
	if (i<1 || i>length) { return 0; }
	int* p = &(elem[i - 1]);
	int e = *p;
	int* q = &(elem[i]);
	for (q; q < &(elem[length]); q++) {
		*(q - 1) = *q;
	}
	//free(p); 不需要释放掉p的空间，因为p的空间我们还要用的；在左移的过程中就用到了p的内存，相当于改写了这块内存
	length--;
	return e;

}
void List::print() {
	for (int i = 0; i < length; i++) {
		cout << elem[i] << " ";
	}
	cout << endl;
}
//int main() {
//	List L;
//	cout << L.getlength()<<endl;
//	for (int i = 1; i < 10; i++) {
//		L.insert(i, i);
//	}
//	L.print();
//	cout << L.getlength() << endl;
//	L.insert(10,5);
//	L.destory();
//	cout << L.getlength() << endl;
//	L.print();
//	cout << L.deleteelem(3) << endl;
//	L.print();
//	
//}