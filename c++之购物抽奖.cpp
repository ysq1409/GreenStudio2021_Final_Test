#include <iostream>
#include <time.h>
using namespace std;

int main()
{
	int a, b, c, e, d;
	float n, m, t, sum, p, s2, count;
	sum = 0;e = 0;s2 = 0;
	cout << "��������Ʒ���\n " << endl;
	cin >> a;
	switch (a)//ѡ����Ʒ���//
	{
	case 1:
		cout << "1.��ˢ(3.5Ԫ/֧) 2.����(9.5Ԫ/֧) 3.����(5.0Ԫ/֧)\n" << endl;
		n = 3.5;m = 9.5;t = 5.0;break;
	case 2:
		cout << "1.Ǧ��(1.0Ԫ/֧) 2.��Ƥ(2.5Ԫ/��) 3.ֱ��(2.0Ԫ/֧)\n" << endl;
		n = 1.0;m = 2.5;t = 2.0;break;
	case 3:
		cout << "1.����(5.0Ԫ/��) 2.����(2.5Ԫ/ƿ) 3.������(2.0Ԫ/��)\n" << endl;
		n = 5.0;m = 2.5;t = 2.0;break;

	}
	cout << "��ѡ����Ʒ\n" << endl;
	cin >> b;
	switch (b)//ѡ����ƷƷ��//
	{
	case 1:
		p = n;break;
	case 2:
		p = m;break;
	case 3:
		p = t;break;
	}
	cout << "��������Ʒ����\n" << endl;//������Ʒ����//
	cin >> c;
	sum = p * c + sum;//�����ܼ�//
	cout << " �ܼ۸�Ϊ" << sum << endl;
	if (sum >= 100)//����ܼ۴���100Ԫ,�����һ��������齱//
	{
		srand((unsigned)time(NULL));//�������������//
		cout << rand() << s2 << endl;//�����s2//
		for (d = 2;d < sum;d++)//�����������ѭ��������������1֮��������ĺ�//
		{
			e = (int)s2%d;//������//
			if (e == 0)
			{
				s2 = s2 + d;//���//
			}
			if (s2 == sum)//��������ܼ����//
			{
				sum = 0;
				cout << "�ⵥ" << endl;//���ⵥ//
			}
		}
	}
	else
	{
		cout << "������齱����" << endl;//���ܼ�С��100�����ܳ齱//

	}
	system("pause");
	return 0;
}