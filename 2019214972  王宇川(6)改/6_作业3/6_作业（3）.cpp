#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include"header.h"
using namespace std;
int main()
{
	char str[10];
	cin >> str;
	Mystring A(str);
	Mystring B(A);
	A.show();
	B.show();





}