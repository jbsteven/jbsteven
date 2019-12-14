#define _CRT_SECURE_NO_WARNINGS
#include"student.h"
#include<iostream>
using namespace std;
int main()
{
	Student stu[5];
	int i = 0;
	char n[1000], id[11], id1[11];
	char* p1 = id1;
	char* pos[5];
	float m, p, e, max = 0;
	for (i = 0; i < 5; i++)
	{
		cout << "please edit info for student " << i + 1 << endl;
		cout << "enter his/her info(identity>>name>>math score>>physics score>>english score)" << endl;
		cout << "(identity length must be no mre than 11)";
		cin >> id >> n >> m >> p >> e;
		stu[i].setdata(m, p, e, n, id);
		if (max <= stu[i].sum())
			max = stu[i].sum();
		pos[i] = stu[i].showid(id);
	}
	cout << "the highest total is:" << max << endl;
	for (i = 0; i < 5; i++)
	{
		cout << "student " << i + 1 << "'s total score is " << stu[i].sum() << endl;
	}
	cout << "enter a identity number to show his/her full info" << endl;
	cin >> id1;
	for (int i = 0; i < 5; i++)
	{
		if (*p1 == *pos[i])
			stu[i].showinfo();
	}

}