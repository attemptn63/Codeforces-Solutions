#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pi pair<int,int>
#define s second
#define f first
int count[5];
main()
{
    int n, l(1), ml(1);
    cin >> n;
    int profits[n];

    for (int i = 0; i < n; i++)
    {
        cin >> profits[i];
        if (i > 0)
            if (profits[i] >= profits[i - 1])
            {
                l++;
                ml = max(ml, l);
            }
            else
                l = 1;
    }

    cout << ml << endl;
    return 0;
}
