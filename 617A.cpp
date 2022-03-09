#include <bits/stdc++.h>
using namespace std;
#define int long long
#define speed ios_base::sync_with_stdio(0);cin.tie(NULL);
typedef pair<int,int>pi;
int32_t main(){
    speed
    int dp[1000010];
    dp[1]=1;
    dp[2]=1;
    dp[3]=1;
    dp[4]=1;
    dp[5]=1;
    int n;cin>>n;
    if(n<6){
        cout<<dp[n];
        return 0;
    }
    for(int i = 6;i<=n;i++){
        dp[i] = min(dp[i-1] + 1,dp[i - 2] + 1);
        dp[i] = min(dp[i],dp[i - 3] + 1);
        dp[i] = min(dp[i],dp[i - 4] + 1);
        dp[i] = min(dp[i],dp[i - 5] + 1);
    }
    cout<<dp[n];
}
