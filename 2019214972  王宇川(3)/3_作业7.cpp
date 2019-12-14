#include <iostream>
using namespace std;
void extreme_pos(int array[], int n, int pos[])
{
	int max, min, i;
	max = min = array[0];
	pos[0] = pos[1] = 0;
	for ( i = 0; i <n; i++)
	{
		if (max < array[i])
		{
			max = array[i];
			pos[1] = i;
		}
		if (min > array[i])
		{
			min = array[i];
			pos[0] = i;
		}

	}
	
}


int main()
{
	int sz[5000], sx[2], n;
	cout << "请输入数字数量";
	cin >> n;
	cout << "输入数字";
	for (int i = 0; i < n; i++)
	{
		cin >> sz[i];
	}
	extreme_pos(sz, n, sx);
	cout << "最大数位置为" << sx[1] << endl;
	cout << "最小数位置为" << sx[0] << endl;

}