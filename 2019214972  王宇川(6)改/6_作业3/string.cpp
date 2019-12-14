#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include"header.h"
using namespace std;
Mystring::Mystring(const char* n)
{
	if (n != NULL)
	{
		p = new char[strlen(n) + 1];
		strcpy(p, n);
	}
}
Mystring::Mystring(Mystring& str)
{
	int strlenth;
	strlenth = strlen(str.p);
	p = new char[strlenth + 1];
	strcpy(p, str.p);

}
Mystring::~Mystring()
{
	delete []p;
}
void Mystring::show()
{
	cout << p << endl;
}
