#include <iostream>
using namespace std;

int main()
{
	int g, l, p;
	cout << "获得了几等奖？";
	cin >> l;
	cout << "分数为";
	cin >> g;
	if (l == 1)
		g += 10;
	else if (l == 2 || l == 3)
		g += 5;
	else
		g = g;
		if (g >= 100)
			g = 100;
		else
			g = g;
			cout <<"得分为"<< g << endl;
		
}



