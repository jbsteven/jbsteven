#include <iostream>
using namespace std;

int main()
{
	int i, sz[10], mid,key,j=0,k=9;
	cout << "请有序输入10个整数：";
	for (i = 0; i < 10; i++)
	{
		cin >> sz[i];
	}
	cout << "请输入要找的数:";
	cin >> key;
	bool yes = false;
	do {
		mid = (j + k) / 2;
		if (sz[mid] == key)
		{
			yes = true;
			break;
		}
		else if (key > sz[mid])
			j = mid + 1;
		else
			k = mid - 1;
	} while (j <= k);
	if (yes)
		cout << "找到该数字" << endl;
	else
		cout << "没有找到该数字" << endl;
	return 0;

}




