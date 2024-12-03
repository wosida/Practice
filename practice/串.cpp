#include<stdlib.h>
#include<iostream>
using namespace std;

//bf算法
int bf(string s, string t) {
	int s_len = s.size();
	int t_len = t.size();
	int x = 0, y = 0;
	while (x < s_len && y < t_len) {
		if (s[x] == t[y]) {
			x++; y++;
		}
		else {
			x = x - y + 1;//x-y是这次比较时主串开始的位置，+1变成下一次应该开始的位置
			y = 0;
		}
	}
	return y == t_len ? x - y:-1;
}
//kmp算法，算法核心思想在于不再回溯主串指针，而根据next数组将子串指针回溯，判断这次匹配失败后，下一次匹配时从子串的哪个地方开始匹配
//next数组
int* getnext(string t) {
	int length = t.size();
	int* next = (int*)malloc(sizeof(int) * (length+1));
	next[0] = -1;
	next[1] = 0;
	int i = 2;
	int j = 0;
	while (i < length) {
		if (t[i - 1] == t[j]) {
			next[i++] = ++j;
		}
		else if (j > 0) {
			j = next[j];
		}
		else {
			next[i++] = 0;
		}
	}
	return next;
}
//kmp算法
int kmp(string s, string t) {
	int s_len = s.size();
	int t_len = t.size();
	if (s_len < t_len) {
		return -1;
	}
	int x = 0, y = 0;
	int *next = getnext(t);
	while (x < s_len && y < t_len) {
		if (s[x] == t[y]) {
			x++;
			y++;
		}
		else if (next[y] == -1) {
			x++;
		}
		else {
			y = next[y];
		}
	}
	free(next);
	return y == t_len ? x - y : -1;
}
//int main() {
//	string s = "abaaac";
//	string t = "aaa";
//	cout << bf(s, t)<<endl;
//	cout << kmp(s, t) << endl;
//	return 0;
//}

//while (i < length) {
//	if (t[i - 1] == t[j]) {
//		next[i++] = ++j;
//	}
//	else if (j > 0) {
//		j = next[j];
//	}
//	else {
//		next[i++] = 0;
//	}
//}