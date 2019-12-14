#include <iostream> 
using namespace std;
int main()
{
	double m, r, money, j = 398;
	cin >> m >> r;

	if (m >= 7 && m <= 9)
	{
		if (r >= 20)
			money = j * r * 0.7;

		else money = j * r * 0.85;
	}

	else
	{
		if (r >= 20)
			money = j * r * 0.5;
		else money = j * r * 0.7;
	}
	cout << money << endl;

	return 0;
}
