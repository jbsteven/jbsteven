#include <iostream>

using namespace std;

int main()
{
	int i, j, sum;
	for (i = 1; i < 1000; i++) {
		sum = i * i;

		if (i < 10)
			j = sum % 10;
		else if (i < 100)
			j = sum % 100;
		else if (i < 1000)
			j = sum % 1000;



		if (i == j)
			cout << i << endl;

	}

	return 0;
}