#include <iostream>
using namespace std;

int main()
{
	int h, i;
	i = 0;
	cin >> h;
	
	if (h % 3 == 0)
	{
		i += 1;
		cout << "可以被3整除" << endl;
	}
	if (h % 5 == 0)
	{
		i += 1;
		cout << "可以被5整除" << endl;
	}
	if (h % 7 == 0)
	{
		i += 1;
		cout << "可以被7整除" << endl;
	}
	
	if (i == 3)
		cout << "可以被三个数整除" << endl;
	else if (i == 2)
		cout << "可以被两个数整除" << endl;
	else if (i == 1)
		cout << "可以被一个数整除" << endl;
	if (i == 0)
		cout << "都不能被整除" << endl;
	return 0;
}



