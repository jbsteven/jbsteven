#include<iostream>
#include"virtual.h"
using namespace std;
void shape::setdata(double x1, double y1)
{
	x = x1;
	y = y1;
}
double rectangle::getarea()
{
	return x * y;
}
double rectangle::getperim()
{
	return 2 * (x + y);
}
double circle::getarea()
{
	return x * x * y;
}
double circle::getperim()
{
	return 2 * x * y;
}
