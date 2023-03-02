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
		cout << endl << "1. 入队.";
		cout << endl << "2. 显示循环队列.";
		cout << endl << "3. 总长度.";
		cout << endl << "4. 取队首元素.";
		cout << endl << "5. 出队.";
		cout << endl << "0. 退出" << endl;
		cin >> c;
		switch (c)
		{
		case'1':
			cout << "原容量为5" << endl;
			cout << "要输入几个数" << endl;
			cin >> d;
			cout << "请输入" << endl;
			for (int i = 0; i < d; i++) {
				cin >> w;
				if (s.EnQueue(w) == OVER_FLOW) {
					cout << "队列已满" << endl;
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
			cout << "队列的长度为：" << l << endl;
			break;
		case'4':
			s.GetHead(z);
			cout << "队首元素为：" << z << endl;
			break;
		case'5':
			s.DelQueue(z);
			cout << "原队首元素为：" << z << endl;
			s.Traverse(Write<int>);
			break;
		case'0':
			return 0;
		}
	}
	return 0;
}