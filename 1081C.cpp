#include <bits/stdc++.h>
using namespace std;
#define int long long
#define speed ios_base::sync_with_stdio(false);cin.tie(NULL); 
#define pi pair<int,int> 
#define pii pair<int,pi>
#define f first
#define s second
#define mod 998244353
int dp[2005][2005];
int32_t main(){
	int n,m,k;cin>>n>>m>>k;
	dp[1][0]=m;
	for(int i = 2;i<=n;i++){
		for(int j = 0;j<i;j++){
			if(j==0)dp[i][0]=m;
			else{
				dp[i][j]=dp[i-1][j]%mod;
				dp[i][j]+=((dp[i-1][j-1]%mod)*((m-1)%mod))%mod;
			}
		}
	}
	cout<<dp[n][k]%mod;
}



