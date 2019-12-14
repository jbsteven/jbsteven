#include<iostream>
#include"person.h"
using namespace std;
int main()
{
	student student01;
	string n, g, m;
	int a, gr;
	cout << "input his name,gender,age,major,grade one by one";
	cin >> n >> g >> a >> m >> gr;
	student01.student::student(n,g,a,m, gr);
	student01.person::print_info();
	student01.print_info();
	
	return 0;
}
