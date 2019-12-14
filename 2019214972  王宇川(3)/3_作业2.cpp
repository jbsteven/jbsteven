#include <iostream>
using namespace std;

void multiplyMatrix(const double a[][3], const double b[][3], double c[][3])
{
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			c[i][j] = a[i][0] * b[0][j] + a[i][1] * b[1][j] + a[i][2] * b[2][j];
}
int main()
{
	int m, n;
	double sz1[3][3], sz2[3][3], sz3[3][3];
	cout << "输入一个3x3数组的各个元素";
	for (m = 0; m < 3; m++)
		for (n = 0; n < 3; n++)
			cin >> sz1[m][n];
	cout << "输入第二个3x3数组的各个元素";
	for (m = 0; m < 3; m++)
		for (n = 0; n < 3; n++)
			cin >> sz2[m][n];
	multiplyMatrix(sz1, sz2, sz3);
	for (m = 0; m < 3; m++)
	{
		{
			for (n = 0; n < 3; n++)
				cout << sz3[m][n] << " ";
		}
		cout << endl;
	}
	return 0;
}

