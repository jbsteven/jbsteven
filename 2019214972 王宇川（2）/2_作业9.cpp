#include<iostream>
using namespace std;
int main()
{
	char str[1000] = { '\0' };
	int i = 0, n;
	cout << "请输入一个正整数：";
	cin >> n;
	int j = 0, p = n, q;
	while (n != 0)
	{
		j++;
		n /= 10;
	}
	do {
		str[i] = p % 10 + '0';
		p /= 10;
		i++;
	} while (p > 0);
	
	for(i=0;i<j/2;i++)
	{
		
		q=str[i];
		str[i] = str[j-1-i];
		str[j-1-i] = q;
		
	


	} 


	cout << str << endl;
	return 0;
}

