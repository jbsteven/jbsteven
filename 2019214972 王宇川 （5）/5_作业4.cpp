#include <iostream>
using namespace std;

void extreme(int* data, int n, int& max, int& min)
{
	for (int i = 0;*(data+i); i++) 
	{
		if (max < *(data + i))
			max = *(data + i);
		if (min > * (data + i))
			min = *(data + i);
	}
}
int main()
{
	int sz[1000];
	int n,i=0, max , min ;
	cout << "输入数组元素数";
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> *(sz+i);
	}
	max = min = *sz;
	extreme(sz, n, max, min);
	cout << max << " " << min;
	return 0;

}




