#include "class.h"
int main() {
	while (1) {
		cout << "��ѡ����Ҫ���в����Ķ���1.��ʦ2.ѧ��3.�ڶ���ʦ4.��ְ�о���";
		int i;
		cin >> i;
		system("cls");
		switch (i)
		{
		case 1: {
			cout << "������Ҫ��ӵĶ���������";
			int n;
			cin >> n;
			cout << "����������ÿ����ʦ���������Ա����䣬���ţ�ְ�ƣ����ʣ�" << endl;
			teacher* p = new teacher[n];
			cout << "��ѡ���ܣ�1.��ѯ2.�޸�";
			int k;
			cin >> k;
			if (k == 1) {
				cout << "��������Ҫ��ѯ��ʦ�Ĺ��ţ�";
				string str;
				cin >> str;
				for (int m = 0; m < n; m++) {
					if (str == p[m].worknum) {
						cout << "��ѯ����Ϣ��(�������Ա����䣬���ţ�ְ�ƣ�����)" << endl;
						p[m].display();
					}
				}
				cout << "�����������......";
				getchar();
				getchar();
			}
			if (k == 2) {
				cout << "��������Ҫ�޸���ʦ�Ĺ��ţ�";
				string str;
				cin >> str;
				for (int m = 0; m < n; m++) {
					if (str == p[m].worknum) {
						cout << "��ʦ��(�������Ա����䣬���ţ�ְ�ƣ�����)" << endl;
						p[m].display();
						cout << "�������޸ĺ����Ϣ��(�������Ա����䣬���ţ�ְ�ƣ�����)" << endl;
						p[m].set();
					}
				}
				cout << "�����������......";
				getchar();
				getchar();
			}
			system("cls");
			break;
		}
		case 2: {
			cout << "������Ҫ��ӵĶ���������";
			int n1;
			cin >> n1;
			cout << "����������ÿ��ѧ�����������Ա����䣬ѧ�ţ��༶��רҵ���ɼ���" << endl;
			student* p1 = new student[n1];
			cout << "��ѡ���ܣ�1.��ѯ2.�޸�";
			int k1;
			cin >> k1;
			if (k1 == 1) {
				cout << "��������Ҫ��ѯѧ����ѧ�ţ�";
				string str;
				cin >> str;
				for (int m = 0; m < n1; m++) {
					if (str == p1[m].stunum) {
						cout << "��ѯ����Ϣ��(�������Ա����䣬ѧ�ţ��༶��רҵ���ɼ�)" << endl;
						p1[m].display();
					}
				}
				cout << "�����������......";
				getchar();
				getchar();
			}
			if (k1 == 2) {
				cout << "��������Ҫ�޸�ѧ����ѧ�ţ�";
				string str;
				cin >> str;
				for (int m = 0; m < n1; m++) {
					if (str == p1[m].stunum) {
						cout << "ѧ����(�������Ա����䣬ѧ�ţ��༶��רҵ���ɼ�)" << endl;
						p1[m].display();
						cout << "�������޸ĺ����Ϣ��(�������Ա����䣬ѧ�ţ��༶��רҵ���ɼ�)" << endl;
						p1[m].set();
					}
				}
				cout << "�����������......";
				getchar();
				getchar();
			}
			system("cls");
			break;
		}
		case 3: {
			cout << "������Ҫ��ӵĶ���������";
			int n2;
			cin >> n2;
			cout << "����������ÿ���ڶ���ʦ���������Ա����䣬���ţ�ְ�ƣ����ʣ��༶��רҵ���ɼ���" << endl;
			readteacher* p2 = new readteacher[n2];
			cout << "��ѡ���ܣ�1.��ѯ2.�޸�";
			int k2;
			cin >> k2;
			if (k2 == 1) {
				cout << "��������Ҫ��ѯ��ʦ�Ĺ��ţ�";
				string str;
				cin >> str;
				for (int m = 0; m < n2; m++) {
					if (str == p2[m].worknum) {
						cout << "��ѯ����Ϣ��(�������Ա����䣬���ţ�ְ�ƣ����ʣ��༶��רҵ���ɼ�)" << endl;
						p2[m].display();
					}
				}
				cout << "�����������......";
				getchar();
				getchar();
			}
			if (k2 == 2) {
				cout << "��������Ҫ�޸���ʦ�Ĺ��ţ�";
				string str;
				cin >> str;
				for (int m = 0; m < n2; m++) {
					if (str == p2[m].worknum) {
						cout << "��ʦ��(�������Ա����䣬���ţ�ְ�ƣ����ʣ��༶��רҵ���ɼ�)" << endl;
						p2[m].display();
						cout << "�������޸ĺ����Ϣ��(�������Ա����䣬���ţ�ְ�ƣ����ʣ��༶��רҵ���ɼ�)" << endl;
						p2[m].set();
					}
				}
				cout << "�����������......";
				getchar();
				getchar();
			}
			system("cls");
			break;
		}
		case 4: {
			cout << "������Ҫ��ӵĶ���������";
			int n3;
			cin >> n3;
			cout << "����������ÿ��ѧ�����������Ա����䣬ѧ�ţ��༶��רҵ���ɼ�, ְ�ƣ�нˮ��������λ��" << endl;
			workstudent* p3 = new workstudent[n3];
			cout << "��ѡ���ܣ�1.��ѯ2.�޸�";
			int k3;
			cin >> k3;
			if (k3 == 1) {
				cout << "��������Ҫ��ѯѧ����ѧ�ţ�";
				string str;
				cin >> str;
				for (int m = 0; m < n3; m++) {
					if (str == p3[m].stunum) {
						cout << "��ѯ����Ϣ��(�������Ա����䣬ѧ�ţ��༶��רҵ���ɼ���ְ�ƣ�нˮ��������λ)" << endl;
						p3[m].display();
					}
				}
				cout << "�����������......";
				getchar();
				getchar();
			}
			if (k3 == 2) {
				cout << "��������Ҫ�޸�ѧ����ѧ�ţ�";
				string str;
				cin >> str;
				for (int m = 0; m < n3; m++) {
					if (str == p3[m].stunum) {
						cout << "ѧ����(�������Ա����䣬ѧ�ţ��༶��רҵ���ɼ���ְ�ƣ�нˮ��������λ)" << endl;
						p3[m].display();
						cout << "�������޸ĺ����Ϣ��(�������Ա����䣬ѧ�ţ��༶��רҵ���ɼ���ְ�ƣ�нˮ,������λ)" << endl;
						p3[m].set();
					}
				}
				cout << "�����������......";
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