#include <iostream>
using namespace std;

int main()
{
	int i, k, j;
	for (i = 0; i <= 6; i++)
	{
		for (j = 1; j <= i; j++)
			cout << "  ";
		for (j = 1; j <= 6-i; j++)
			cout << j << " ";
		for (k = 1; k <= 6; k++)
		{
			if (k = 6)
				cout << endl;

		}





	}
	return 0;
}

