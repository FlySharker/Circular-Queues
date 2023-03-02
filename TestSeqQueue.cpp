#include"Assistance.h"
#include"SeqQueue.h"
using namespace std;
int main() {
	SeqQueue<int>s(5);
	int w, z;
	int d, l, v;
	char c = '9';
	while (c != '0')
	{
		cout << endl << "1. ���.";
		cout << endl << "2. ��ʾѭ������.";
		cout << endl << "3. �ܳ���.";
		cout << endl << "4. ȡ����Ԫ��.";
		cout << endl << "5. ����.";
		cout << endl << "0. �˳�" << endl;
		cin >> c;
		switch (c)
		{
		case'1':
			cout << "ԭ����Ϊ5" << endl;
			cout << "Ҫ���뼸����" << endl;
			cin >> d;
			cout << "������" << endl;
			for (int i = 0; i < d; i++) {
				cin >> w;
				if (s.EnQueue(w) == OVER_FLOW) {
					cout << "��������" << endl;
					break;
				}
			}
			break;
		case'2':
			s.Traverse(Write<int>);
			cout << endl;
			break;
		case'3':
			l = s.GetLength();
			cout << "���еĳ���Ϊ��" << l << endl;
			break;
		case'4':
			s.GetHead(z);
			cout << "����Ԫ��Ϊ��" << z << endl;
			break;
		case'5':
			s.DelQueue(z);
			cout << "ԭ����Ԫ��Ϊ��" << z << endl;
			s.Traverse(Write<int>);
			break;
		case'0':
			return 0;
		}
	}
	return 0;
}