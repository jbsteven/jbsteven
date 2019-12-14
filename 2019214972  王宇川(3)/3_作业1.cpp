#include <iostream>
using namespace std;
int main()
{
	int yhTri[11][11];
	int n, m, i = 0;
	for (n = 1; n < 11; n++)
	{
		yhTri[n][n] = 1;
		yhTri[n][1] = 1;
	}
	for (n = 3; n < 11; n++)
	{
		for (m = 2; m <= n-1; m++)
		{
			yhTri[n][m] = yhTri[n - 1][m - 1] + yhTri[n - 1][m];
		}
	}
	for (n = 1; n < 11; n++)
	{
		for (m = 1; m <= n; m++)
			cout << yhTri[n][m] << " ";
			i++;
		if (i == n)
			cout << endl;


	}
	return 0;
}
	




