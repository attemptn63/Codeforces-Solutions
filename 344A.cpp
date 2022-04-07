#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pi pair<int,int>
#define s second
#define f first
main(){
    int a,b,c,ans=1; cin >> a >> b;
    for (int i = 0; i < a - 1; i++) {
        cin >> c;
        if (b != c) {
            ans++;
            b = c;
        }
    }
    cout << ans;
}
