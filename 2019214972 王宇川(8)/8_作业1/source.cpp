#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include"person.h"
#include<string>
using namespace std;
person::person(){}
person::person(string n, string g, int a)
{
	name = n;
	gender = g;
	age = a;
}
void person::print_info()
{
	cout << "name is:" << name << endl;
	cout << "gender is:" << gender << endl;
	cout << "age is:" << age << endl;
}
student::student(){};
student::student(string n, string g, int a, string m, int g1):person(n,g,a)
{
	major = m;
	grade = g1;
}
 void student::print_info()
{
	 cout << "major is:" << major << endl;
	 cout << "grade is:" << grade << endl;
}

