#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, miss, b; cin >> n;
	bool huruf[26];
	cin.ignore();
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < 26; ++j)
		{
			huruf[j] = 0;
		}
		miss = 0;
		string input;
		getline(cin, input);
		for (auto x:input)
		{
			b = tolower(x)-'a';
			if (b >= 0 and b < 26 and !huruf[b])
			{
				huruf[b] = 1;
				miss++;
			}
		}
		if (miss == 26)
		{
			cout << "pangram";
		}
		else
		{
		    cout << "missing ";
		    for (int y = 0; y < 26; ++y)
		    {
		    	if (!huruf[y])
		    	{
		    		char out = y+'a';
		    		cout << out;
		    	}
		    }
		}
		cout << endl;
	}
	return 0;
}