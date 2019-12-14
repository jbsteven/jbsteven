#include <iostream>
using namespace std;

int digitR(int a, int b)
{
	int j;
	for (int i=0;i<b;i++)
	{
		j = a % 10;
		a /= 10;

	}
	return j;


 }
int main()
{
	int n, m;
	cin >> n >> m ;
	cout << digitR(n, m) << endl;


	return 0;
}
    




