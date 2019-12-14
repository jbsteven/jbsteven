#include <iostream>
#include<cmath>
using namespace std;
double getarea(double a = 1)
{
	double PI = 3.1415;
	double s = a * a * PI;
	return s;
}
double getarea(double a, double b, double m, double n)
{
	double PI = 3.1415;
	double d2 = (m - a) * (m - a) + (n - b) * (n - b);
	double r = sqrt(d2) / 2;
	double s = r * r * PI;
	return s;

}
int main()
{
	int j;
	double a, b, m, n;
	cout << "请选择计算项目" << endl;
	cout << "1:预设圆面积" << endl;
	cout << "2:自定义圆面积" << endl;
	cin >> j;
	switch (j)
	{
	case 1:
		cout << getarea() << endl;
		break;
	case 2:
		cout << "请顺序输入圆端点坐标x1,y1,x2,y2" << endl;
		cin >> a >> b >> m >> n;
		cout << getarea(a, b, m, n);
		break;

	}
	return 0;
}