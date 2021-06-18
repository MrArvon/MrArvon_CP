#include <bits/stdc++.h>
using namespace std;

int main()
{
	string input;
	char row[5][20] = {{'`','1','2','3','4','5','6','7','8','9','0','-','='},
                    	{'Q','W','E','R','T','Y','U','I','O','P','[',']','\\'},
                        {'A','S','D','F','G','H','J','K','L',';','\'','&','&'},
                        {'Z','X','C','V','B','N','M',',','.','/','&','&','&'}};

	
	while(getline(cin, input))
	{
		for (int z = 0; z < input.length(); z++)
		{
			for (int i = 0; i < 4; i++)
			{
				for (int x = 0; x < 14; x++)
				{
					if (input[z] == row[i][x])
					{
						cout << row[i][x-1];
					}
				}
			}
			if (input[z] == ' ')
			{
				cout << " ";
			}
		}
		cout << endl;
	}
	return 0;
}