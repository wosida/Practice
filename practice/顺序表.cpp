#define LIST_INIT_SIZE 100
#define LISTINCREMENT 10
#include<stdlib.h>
#include<iostream>
using namespace std;

class List {
	int* elem;//˳������ַָ��
	int length;
	int listsize;
public:
	List();//��ʼ��һ����˳���
	int getlength();
	int getlistsize();
	void InitLIST();
	int locate(int e, bool (*compare)(int, int));//���Һ��������ҵ�һ������������Ԫ�أ������ڣ���������λ��
	void insert(int e,int i);//����Ԫ��
	int deleteelem(int i);//ɾ����i��Ԫ��,������ֵ
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
//����һ���յ��б�
List::List(){
	elem = (int*)malloc(LIST_INIT_SIZE * sizeof(int));
	
	if (!elem) {
		exit(0);
	}
	cout << elem<<endl;
	length = 0;
	listsize = LIST_INIT_SIZE;
}
// ������ʽ������thisָ�룬����ʵ��˫��ֵ���ͺ͹��캯����ͬ��
void List::InitLIST() {  //�������Ԫ������������ĳ�Ա����������Ĳ����������õĻ����޷���L��Ԫ��ʵ����ĸı䣬�޷�˫��ֵ
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
	while (i<length &&!(*compare)(e,*p++))//���whileѭ��д�ĺ�Ư�����ҵĵ�һ�о���ֱ������*p�Ƿ�
		//����e������û������������,ע����С�ڣ�������С�ڵ���
	{
		i++;
	}
	if (i <= length)return i;
	else return 0;
}
void List::insert(int e,int i) {//��ָ��λ�ò���Ԫ�أ���Ҫ�Ƚ�����Ԫ�غ�ߵ�Ԫ��λ�ú��ƣ�����Ҫ���ƶ����һ����
	//�ٲ��뵱ǰԪ��,1<=i<=length+1
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
	for (p;p>=q;p--) {//����Ϊ0ʱ�����޷������ѭ������ʱ*p=elem[-1],�����δ��ʼ�����ڴ棬���ǲ���������ʵ��
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
	//free(p); ����Ҫ�ͷŵ�p�Ŀռ䣬��Ϊp�Ŀռ����ǻ�Ҫ�õģ������ƵĹ����о��õ���p���ڴ棬�൱�ڸ�д������ڴ�
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