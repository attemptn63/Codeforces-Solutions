
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define speed ios_base::sync_with_stdio(false);cin.tie(NULL); 
#define pi pair<int,int> 
#define pii pair<int,pi>
#define f first
#define s second	
main(){
	speed
	int n,m;cin>>n>>m;
	int totalname=0;
	for(int i = 0;i<n;i++){
		int a;cin>>a;
		totalname+=a;
		int ans = 0;
		ans = totalname/m;
		totalname -= m*ans;
		cout<<ans<<" ";
	}
}
