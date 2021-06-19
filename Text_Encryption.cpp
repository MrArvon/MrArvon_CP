#include <bits/stdc++.h>
using namespace std;

int main()
{
    while(1)
    {
        int n; cin >> n;
        cin.ignore();
        if (n == 0)
        {
        	break;
        }
        string s;
        getline(cin, s);
        s.erase(remove(s.begin(), s.end(), ' '), s.end());
        string arr[s.length()];

        if (s.length() <= n)
        {
        	for (auto x:s)
        	{
        		x = toupper(x);
        		cout << x;
        	}
        }
        else
        {
            int next = 0;
	        int now = 0;
	        int count = 0; 

	        while(count < n)
	        {
	     		arr[next] = toupper(s[now]);
	     		next += n; now++;
	     		if (next >= s.length() or now >= s.length())
	     		{
	     			count++;
	     			next = count;
	     		}
	        }
	        for (auto x:arr)
	        {
	        	cout << x;
	        }
        }        
        cout << endl;
    }
	return 0;
}