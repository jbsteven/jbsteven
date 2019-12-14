#include <iostream>
using namespace std;

int main()
{
	int n, i=1, sum;
	for (n = 1; ; n++)
	{
		i *= 10;
		sum = (i - 4) * 8;
		if (sum % 39 == 0)
		{
			cout <<"最小为"<< sum / 39 * 10 + 8 << endl;
			break;
		}
		

		
		
	}
	
	
	return 0;
}




