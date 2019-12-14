#include <iostream>
using namespace std;

int main()
{
	int num[10];
	int i = 0, sum = 0;
	for (i = 0; i < 10; i++)
	{
		cin >> num[i];
	}
	for (i = 0; i < 10; i++)
	{
		cout << num[i] << " ";
	}
	cout << endl;
	for (i = 0; i < 10; i++)
	{
		sum += num[i];
	}
	cout << sum;

}




