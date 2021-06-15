#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int arr[n-1];
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}
	sort(arr, arr+n);

	for (int i = 0; i < n; i++)
	{
		if (i == 0)
		{
			cout << arr[i];
		}
		int akhir;
		bool jump = 0;
		while (arr[i] == arr[i+2]-2)
		{
			akhir = arr[i+2];
			i += 1;
			jump = 1;
		}
		if (jump == 1)
		{
			cout << "-" << akhir;
		}
		else
		{
			if (i == n-1)
			{
				/* PASS */
			}
			else
			{
			    cout << " " << arr[i+1];
			}
		}
	}
	return 0;
}