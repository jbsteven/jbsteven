#include <iostream>
using namespace std;

int main()
{
	char lt[10000000];
	int num, count[26] = {0}, COUNT[26] = {0};
	cout << "输入一串英文字符" << endl;
	cin >> lt;
	for (num = 0; lt[num] != '\0'; num++)
	{
		if (lt[num] >= 'a' && lt[num] <= 'z')
			count[lt[num] - 'a']++;
		else
			COUNT[lt[num] - 'A']++;





	}
	for (num= 0; num<26; num++)
		if(count[num] != 0 || COUNT[num] != 0)
	{
		cout << char(num + 'a') <<" "<< count[num] + COUNT[num]<<"    ";
		
	}
	
	return 0;



}




