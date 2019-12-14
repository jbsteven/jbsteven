#include<iostream>
using namespace std;

int main()
{
	int i, j, sum = 0;
	for (i = 1; i <= 1000; i++)
	{
		for (j = 1; j <= i; j++)
		{
			if (i % j == 0)
				sum += j;
		}
		if (sum - i == i)
			cout << i << " ";

		sum = 0;


	}



	return 0;
}
