﻿#include <iostream>
using namespace std;

int main()
{
	int a[10], i, j, k;
	cout << "输入十个整数:" << endl;
	for (i = 0; i < 10; i++)
		cin >> a[i];
		cout << endl;
	for (j = 0; j < 9; j++)
		for (i = 0; i < 9 - j; i++)
			if (a[i] > a[i + 1])
			{
				k = a[i];
				a[i] = a[i + 1];
				a[i + 1] = k;
			}
	for (i = 0; i < 10; i++)
	{
		cout << a[i] << "  ";
	}
	cout << endl;
	return 0;
}




