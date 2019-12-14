#include<iostream>
#include"virtual.h"
using namespace std;
int main()
{
	rectangle rec;
	circle cir;
	shape* p;
	p = &rec;
	double x, y;
	cout << "input the rectangle's length and width:" << endl;
	cin >> x >> y;
	p->setdata(x, y);
	cout << "rectangle's area is:" << p->getarea() << endl;
	cout << "rectangle's perimeter is:" << p->getperim() << endl;
	shape* p1;
	p1 = &cir;
	double x1;
	cout << "input the circle's radius:" << endl;
	cin >> x1;
	p1->setdata(x1,3.14);
	cout << "circle's area is:" << p1->getarea() << endl;
	cout << "circle's perimeter is:" << p1->getperim() << endl;
	return 0;



}