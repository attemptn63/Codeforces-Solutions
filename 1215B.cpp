#include <bits/stdc++.h>
using namespace std;
#define int long long
#define speed ios_base::sync_with_stdio(false);cin.tie(NULL); 
#define pi pair<int,int> 
#define pii pair<int,pi>
#define f first
#define s second
int32_t main(){
	int n,neg=0,cnt1=0,cnt2=0,ans=0;cin>>n;
	for(int i = 0;i<n;i++){
		int a;cin>>a;
		if(neg%2==0)cnt1++;
		else cnt2++;
		if(a<0)neg++;
		if(neg%2==0)ans+=cnt1;
		else ans+=cnt2;
	}
	cout<<(n*(n+1))/2-ans<<" "<<ans;
}



