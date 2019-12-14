#include <iostream>
using namespace std;
int main()
{
	int i, j, n, k, l;
	cin >> i >> j;
	k = i;
	l = 0;

		for (n = 1; n <= j; n++)

			{
				l += i;
				i = i * 10 + k;
		;
			}
	cout << l << endl;






	return 0;
}