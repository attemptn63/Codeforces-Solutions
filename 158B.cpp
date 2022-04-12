#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pi pair<int,int>
#define s second
#define f first
int count[5];
main(){
    int n, s, count[5]= {0};
    cin>>n;
    for(int i =0;i<n;i++)
    {
        cin>>s;
        count[s]++;
    }
    int ans = count[4] + count[3] + count[2] / 2;
    count[1] -= count[3];
    if (count[2] % 2 == 1){
        ans++;
        count[1] -= 2;
    }
    if (count[1] > 0){
        ans += (count[1] + 3) / 4;
    }
    cout<<ans;
}
