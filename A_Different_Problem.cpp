#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long x, y, a, b;
	while(1){
	    cin >> x >> y;
	    if (x == a and y == b)
	    {
	    	break;
	    }
	    else
	    {
	    	cout << abs(x-y) << endl;
	        a = x; b = y;
	    }
	}
	return 0;
}