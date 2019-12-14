#include <iostream>
#include"clock.h"
using namespace std;
int main()
{
	Clock clock1;
	int h, m, s;
	int h1, m1, s1;
	cout << "please enter a random time(0<=hour<=23,0<=m<=59,0<=s<=59)" << endl;
	cout << "hour=";
	cin >> h;
	cout << "minute=";
	cin >> m;
	cout << "second=";
	cin >> s;
	clock1.setTime(h, m, s);
	clock1.showtime();
	cout << "please enter another random time to calculate the interval between them" << endl;
	cout << "hour=";
	cin >> h1;
	cout << "minute=";
	cin >> m1;
	cout << "second=";
	cin >> s1;
	cout << "interval is " << clock1.interval(h1, m1, s1) << "s" << endl;
	return 0;
}

