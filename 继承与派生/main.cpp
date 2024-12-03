#include "class.h"
int main() {
	while (1) {
		cout << "请选择您要进行操作的对象：1.教师2.学生3.在读教师4.在职研究生";
		int i;
		cin >> i;
		system("cls");
		switch (i)
		{
		case 1: {
			cout << "请输入要添加的对象人数：";
			int n;
			cin >> n;
			cout << "请依次输入每个教师的姓名，性别，年龄，工号，职称，工资：" << endl;
			teacher* p = new teacher[n];
			cout << "请选择功能：1.查询2.修改";
			int k;
			cin >> k;
			if (k == 1) {
				cout << "请输入想要查询老师的工号：";
				string str;
				cin >> str;
				for (int m = 0; m < n; m++) {
					if (str == p[m].worknum) {
						cout << "查询到信息：(姓名，性别，年龄，工号，职称，工资)" << endl;
						p[m].display();
					}
				}
				cout << "按任意键继续......";
				getchar();
				getchar();
			}
			if (k == 2) {
				cout << "请输入想要修改老师的工号：";
				string str;
				cin >> str;
				for (int m = 0; m < n; m++) {
					if (str == p[m].worknum) {
						cout << "教师：(姓名，性别，年龄，工号，职称，工资)" << endl;
						p[m].display();
						cout << "请输入修改后的信息：(姓名，性别，年龄，工号，职称，工资)" << endl;
						p[m].set();
					}
				}
				cout << "按任意键继续......";
				getchar();
				getchar();
			}
			system("cls");
			break;
		}
		case 2: {
			cout << "请输入要添加的对象人数：";
			int n1;
			cin >> n1;
			cout << "请依次输入每个学生的姓名，性别，年龄，学号，班级，专业，成绩：" << endl;
			student* p1 = new student[n1];
			cout << "请选择功能：1.查询2.修改";
			int k1;
			cin >> k1;
			if (k1 == 1) {
				cout << "请输入想要查询学生的学号：";
				string str;
				cin >> str;
				for (int m = 0; m < n1; m++) {
					if (str == p1[m].stunum) {
						cout << "查询到信息：(姓名，性别，年龄，学号，班级，专业，成绩)" << endl;
						p1[m].display();
					}
				}
				cout << "按任意键继续......";
				getchar();
				getchar();
			}
			if (k1 == 2) {
				cout << "请输入想要修改学生的学号：";
				string str;
				cin >> str;
				for (int m = 0; m < n1; m++) {
					if (str == p1[m].stunum) {
						cout << "学生：(姓名，性别，年龄，学号，班级，专业，成绩)" << endl;
						p1[m].display();
						cout << "请输入修改后的信息：(姓名，性别，年龄，学号，班级，专业，成绩)" << endl;
						p1[m].set();
					}
				}
				cout << "按任意键继续......";
				getchar();
				getchar();
			}
			system("cls");
			break;
		}
		case 3: {
			cout << "请输入要添加的对象人数：";
			int n2;
			cin >> n2;
			cout << "请依次输入每个在读教师的姓名，性别，年龄，工号，职称，工资，班级，专业，成绩：" << endl;
			readteacher* p2 = new readteacher[n2];
			cout << "请选择功能：1.查询2.修改";
			int k2;
			cin >> k2;
			if (k2 == 1) {
				cout << "请输入想要查询老师的工号：";
				string str;
				cin >> str;
				for (int m = 0; m < n2; m++) {
					if (str == p2[m].worknum) {
						cout << "查询到信息：(姓名，性别，年龄，工号，职称，工资，班级，专业，成绩)" << endl;
						p2[m].display();
					}
				}
				cout << "按任意键继续......";
				getchar();
				getchar();
			}
			if (k2 == 2) {
				cout << "请输入想要修改老师的工号：";
				string str;
				cin >> str;
				for (int m = 0; m < n2; m++) {
					if (str == p2[m].worknum) {
						cout << "教师：(姓名，性别，年龄，工号，职称，工资，班级，专业，成绩)" << endl;
						p2[m].display();
						cout << "请输入修改后的信息：(姓名，性别，年龄，工号，职称，工资，班级，专业，成绩)" << endl;
						p2[m].set();
					}
				}
				cout << "按任意键继续......";
				getchar();
				getchar();
			}
			system("cls");
			break;
		}
		case 4: {
			cout << "请输入要添加的对象人数：";
			int n3;
			cin >> n3;
			cout << "请依次输入每个学生的姓名，性别，年龄，学号，班级，专业，成绩, 职称，薪水，工作单位：" << endl;
			workstudent* p3 = new workstudent[n3];
			cout << "请选择功能：1.查询2.修改";
			int k3;
			cin >> k3;
			if (k3 == 1) {
				cout << "请输入想要查询学生的学号：";
				string str;
				cin >> str;
				for (int m = 0; m < n3; m++) {
					if (str == p3[m].stunum) {
						cout << "查询到信息：(姓名，性别，年龄，学号，班级，专业，成绩，职称，薪水，工作单位)" << endl;
						p3[m].display();
					}
				}
				cout << "按任意键继续......";
				getchar();
				getchar();
			}
			if (k3 == 2) {
				cout << "请输入想要修改学生的学号：";
				string str;
				cin >> str;
				for (int m = 0; m < n3; m++) {
					if (str == p3[m].stunum) {
						cout << "学生：(姓名，性别，年龄，学号，班级，专业，成绩，职称，薪水，工作单位)" << endl;
						p3[m].display();
						cout << "请输入修改后的信息：(姓名，性别，年龄，学号，班级，专业，成绩，职称，薪水,工作单位)" << endl;
						p3[m].set();
					}
				}
				cout << "按任意键继续......";
				getchar();
				getchar();
			}
			system("cls");
			break;
		}
		default:
			break;
		}

	}
	return 0;
}