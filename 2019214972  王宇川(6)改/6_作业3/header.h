#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
class Mystring
{
private:
	char* p;
public:
	Mystring(const char* p);
	Mystring(Mystring&);
	~Mystring();
	void show();
};
