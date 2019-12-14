#include <iostream>
using namespace std;

int main()
{
	int i,average;
	double sum = 0, j;
	double sz[11];
	cout << "请输入10个数字";
	for (i = 1; i <= 10; i++)
	{
		cin >> j;
		sz[i] = j;
		sum += sz[i];


	}
	i = 1;
	average = sum / 10;
	cout << "小于平均值的有" << endl;
	for (i = 1; i <= 10; i++)
	{
		if (sz[i] <= average)
			cout << sz[i] << " ";


	}
	return 0;
		
}




