#include <iostream>
using namespace std;

bool isOddDigit(int n)
{
	while (n != 0) 
	{
		if (n % 10 % 2 == 0)
			return false;
		else { n /= 10; }

	}
	return true;
}
int main()
{
	int i;
	cin >> i;
	isOddDigit(i);
	if (isOddDigit(i))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	return 0;
}




