#include<iostream>
#include"clock.h"
using namespace std;
Clock::Clock(int hour , int minute , int second )
{
	cout << hour << ":" << minute << ":" << second << endl;
}
void Clock::setTime(int h, int m, int s)
{
	if (0 <= h && h <= 23 && 0 <= m && m <= 59 && 0 <= s && s <= 59)
	{
		hour = h;
		minute = m;
		second = s;
	}
	else
	{
		cout << "invalid data" << endl;
		system("pause");

	}
}
void Clock::showtime()
{
	cout << hour << ":" << minute << ":" << second << endl;
}
int Clock::interval(int h, int m, int s)
{
	int sum1 = h * 3600 + m * 60 + s;
	int sum2 = hour * 3600 + minute * 60 + second;
	if (sum1 >= sum2)
	{
		return sum1 - sum2;
	}
	else
		return sum2 - sum1;
}