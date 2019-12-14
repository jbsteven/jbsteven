#include <iostream>
using namespace std;

int main()
{
	int year, month, day;
	cout << "输入一个年份:";
	cin >> year;
	cout << "输入一个月份:";
	cin >> month;
	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
		day = 31;
	else if (month == 2)
	{
		if (year % 4 == 0 && year % 100 != 0)
			day = 29;
		else day = 28;
	}
	else day = 30;
	cout << "有" << day << "天" << endl;
	return 0;



}




