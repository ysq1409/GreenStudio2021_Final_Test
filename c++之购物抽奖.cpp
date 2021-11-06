#include <iostream>
#include <time.h>
using namespace std;

int main()
{
	int a, b, c, e, d;
	float n, m, t, sum, p, s2, count;
	sum = 0;e = 0;s2 = 0;
	cout << "请输入商品类别\n " << endl;
	cin >> a;
	switch (a)//选择商品类别//
	{
	case 1:
		cout << "1.牙刷(3.5元/支) 2.牙膏(9.5元/支) 3.肥皂(5.0元/支)\n" << endl;
		n = 3.5;m = 9.5;t = 5.0;break;
	case 2:
		cout << "1.铅笔(1.0元/支) 2.橡皮(2.5元/块) 3.直尺(2.0元/支)\n" << endl;
		n = 1.0;m = 2.5;t = 2.0;break;
	case 3:
		cout << "1.蛋糕(5.0元/块) 2.饮料(2.5元/瓶) 3.方便面(2.0元/袋)\n" << endl;
		n = 5.0;m = 2.5;t = 2.0;break;

	}
	cout << "请选择商品\n" << endl;
	cin >> b;
	switch (b)//选择商品品种//
	{
	case 1:
		p = n;break;
	case 2:
		p = m;break;
	case 3:
		p = t;break;
	}
	cout << "请输入商品数量\n" << endl;//输入商品数量//
	cin >> c;
	sum = p * c + sum;//计算总价//
	cout << " 总价格为" << sum << endl;
	if (sum >= 100)//如果总价大于100元,则进行一次随机数抽奖//
	{
		srand((unsigned)time(NULL));//创建随机数种子//
		cout << rand() << s2 << endl;//随机数s2//
		for (d = 2;d < sum;d++)//对随机数进行循环以求其除本身和1之外的因数的和//
		{
			e = (int)s2%d;//求因数//
			if (e == 0)
			{
				s2 = s2 + d;//求和//
			}
			if (s2 == sum)//如果和与总价相等//
			{
				sum = 0;
				cout << "免单" << endl;//则免单//
			}
		}
	}
	else
	{
		cout << "不满足抽奖条件" << endl;//若总价小于100，则不能抽奖//

	}
	system("pause");
	return 0;
}