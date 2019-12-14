#include <iostream>
using namespace std;

bool isPalindromes(int n)
{
	int b = 0, temp = n;
	while (n != 0) {
		b *= 10;
		b += n % 10;
		n /= 10;
	}
	if (b == temp)
		return true;
	else
		return false;

}
int main()
{
	int n,i=0;
	cout << "enter a number";
	cin >> n;
	if (isPalindromes(n))
		cout << "it is palindrome" << endl;
	else
		cout << "it isn't palindrome" << endl;
	
	for (i = 0; i <= 1000; i++)
	{
		if (isPalindromes(i))
			cout << i <<" ";
	}
	return 0;
}




