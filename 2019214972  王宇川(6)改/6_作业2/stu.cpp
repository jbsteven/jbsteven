#define _CRT_SECURE_NO_WARNINGS
#include"student.h"
#include<iostream>
using namespace std;
Student::Student()
{
	strcpy(id, "");
	name = new char[1000];
	strcpy(name, "");
	math = 0;
	english = 0;
	physics = 0;
}
void Student::setdata(float m, float p, float e, char n[], char identity[])
{
	strcpy(id, identity);
	strcpy(name, n);
	math = m;
	physics = p;
	english = e;
}
float Student::sum()
{
	return math + physics + english;
}
void Student::showinfo()
{
	cout << "name is:" << name << endl;
	cout << "identity is:" << id << endl;
	cout << "math score is:" << math << endl;
	cout << "physics score is:" << physics << endl;
	cout << "english score is:" << english << endl;
}
char* Student::showid(char identity[])
{
	char* p = id;
	strcpy(id, identity);
	return p;
}
Student::~Student()
{
	delete[]name;
}