#include<iostream>
#include"polygon.h"
#include<cmath>
using namespace std;
Point::Point(int x,int y) 
{
	this->x = x;
	this->y = y;
}
int Point::getx()
{
	return x;
}
int Point::gety()
{
	return y;
}
void Point::show()
{
	cout << x << "," << y << endl;
}
Line::Line(int x1, int y1, int x2, int y2):p1(x1,y1),p2(x2,y2)
{
	this->p1 = p1;
	this->p2 = p2;
}
Line::Line(Point p1, Point p2)
{
	this->p1 = p1;
	this->p2 = p2;
}
double Line::length()
{
	double l1;
	l1 = sqrt((p1.getx() - p2.getx()) * (p1.getx() - p2.getx()) + (p1.gety() - p2.gety()) * (p1.gety() - p2.gety()));
	return l1;

}
Point Line::getp1()
{
	return p1;
}
Point Line::getp2()
{
	return p2;
}
void Line::show()
{
	cout << p1.getx() << "," << p1.getx() << endl;
	cout << p2.getx() << "," << p2.getx() << endl;
}
Polygon::Polygon(Line* line, int edge_num = 0) :p(new Line[edge_num]), edges(edge_num)
{
	for (int i = 0; i < edge_num; i++)
	{
		p[i] = *line;
		line++;
	}
}
Polygon::Polygon(Point* point, int point_num=0):p(new Line[point_num]), edges(point_num)
{
	Line* p1 = p;
	Point* p2 = point;
	for (int i = point_num; i > 1; i--)
	{
		*p1 = Line(*p2, *(p2 + 1));
		p1++;
		p2++;
	}
	*p1 = Line(*p2, *point);
}
double Polygon::area()
{
	int sum=0;
	for (int i = 0; i < edges-1; i++)
	{
		sum += (p[i].getp1().getx() * p[i+1].getp2().gety()) - (p[i+1].getp1().gety() * p[i].getp2().getx());
	}
	sum += (p[edges-1].getp2().getx() * p[0].getp1().gety()) - (p[0].getp1().getx() * p[edges-1].getp2().gety());
	if (sum >= 0)
		return sum / 2;
	else
		return -(sum / 2);
}
double Polygon::perimeter()
{
	double sum = 0;
	for (int i = 0; i < edges; i++)
	{
		sum += p[i].length();
	}
	return sum;
}
void Polygon::show()
{
	cout<<"各个点为:"<<endl;
	for (int i = 0; i < edges; i++)
	{
		cout << p[i].getp1().getx() << "," << p[i].getp1().gety() << endl;	
	}
	cout << "周长为：" << Polygon::perimeter() << endl;
	cout << "面积为：" << Polygon::area() << endl;
}