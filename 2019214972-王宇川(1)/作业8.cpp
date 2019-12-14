#include <iostream>
using namespace std;

int main()
{
	int i, j=0, k;
	cin >> i;
	for (; i / 10 >= 0;)
	{
		k = i % 10;
		i = i / 10;
		cout << k;
		if (i == 0)
			break;
	}
}




