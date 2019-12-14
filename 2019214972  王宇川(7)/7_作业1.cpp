#include<iostream>
#include"polygon.h"
using namespace std;
int main()
{
	int n, x1 = 0, y1 = 0;
	cout << "请输入一个大于等于3的整数n";
	cin >> n;
	Point* p1 = new Point[n];
	cout << "请顺时针输入n个点的坐标";
	for (int i = 0; i < n; i++)
	{
		cin >> x1 >> y1;
		p1[i].Point::Point(x1, y1);
		x1 = y1 = 0;
	}
	Line* lines = new Line[n];
	for (int i = 0; i < n - 1; i++)
	{
		lines[i].Line::Line(p1[i], p1[i + 1]);

	}
	lines[n - 1].Line::Line(p1[n - 1], p1[0]);
	Polygon poly(lines, n);
	poly.show();
}