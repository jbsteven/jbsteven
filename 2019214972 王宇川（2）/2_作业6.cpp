#include <iostream>
using namespace std;

int main()
{
	int sz[10], i, j, min, temp;
	cout << "请输入10个整数" << endl;
	for (i = 0; i <10; i++)
		cin >> sz[i];
		cout << endl;
		for (i = 0; i <10; i++)
		{
			min = i;
			for (j = i + 1; j <10; j++)
				if (sz[min] > sz[j])
					min = j;
					temp = sz[i];
					sz[i] = sz[min];
					sz[min] = temp;
		}
		cout << "排序后" << endl;
		for (i = 0; i <= 9; i++)
			cout << sz[i] << " ";
		return 0;
}




