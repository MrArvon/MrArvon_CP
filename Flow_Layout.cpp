#include <bits/stdc++.h>
using namespace std;

int main()
{
    while(1)
    {
        int n; cin >> n;
        if (n == 0)
        {
            break;
        }
        int temp_w = 0, temp_h = 0;
        int max_w = 0, max_h = 0;
        while(1)
        {
            int w, h;
            cin >> w >> h;
            if (w == -1 and h == -1)
            {
                cout << max_w << " x " << temp_h + max_h << endl;
                int temp_w = 0, temp_h = 0;
                int max_w = 0, max_h = 0;
                break;
            }
            if (temp_w + w <= n)
            {
                temp_w += w;
                temp_h = max(temp_h, h);
            }
            else
            {
                max_h += temp_h;
                temp_w = w, temp_h = h;
            }
            max_w = max(max_w, temp_w);
        }
    }
    return 0;
}