#include <iostream>
using namespace std;

int main()
{
	int i, j;
	j = 0;
	
	for (i = 100; i <= 1000; i++)
	
	{
		
		{if (i % 10 == 3 || i % 3 == 0)

		{
			cout << i << " ";
			j+=1;
		}
		if (j == 10)
		{
			cout << endl;
			j = 0;
		}
		
		
		}

		


	}
	return 0;
}




