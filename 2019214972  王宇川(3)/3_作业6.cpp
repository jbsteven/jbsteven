#include<iostream>
using namespace std;
double max(double data[],int n)
	{
	double max=data[0];
	int i;
	for(i=1;i<n;i++)
		if(data[i]>max)
			max=data[i];
	return max;		
	}
int main()
{
	int i,n;
	cout<<"��������Ԫ�ظ���";
	cin>>n;
	double data[n];
	cout<<"��������Ԫ��:";
	for(i=0;i<n;i++)
		cin>>data[i];
	cout<<max(data,n);	 
	return 0;
}
