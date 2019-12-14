#include <iostream>
using namespace std;

int main()
{
	int j=0;
	int *p;
	int num[10];
	p = num;
	int sum = 0;
	for (j = 0; j < 10; j++)
	{
		cin >> *p;
		p++;
	}
	p = num;
	for (j = 0; j < 10; j++)
	{
		cout << *p << " ";
		p++;
		
	}
	cout << endl;
	p = num;
	for (j = 0; j < 10; j++)
	{
		sum += *p;
		p++;
		
	}
	cout << sum << endl;
	return 0;
}
