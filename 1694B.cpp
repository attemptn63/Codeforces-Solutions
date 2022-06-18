#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define speed ios_base::sync_with_stdio(0);cin.tie(NULL);
#define pi pair<ll,ll>
#define pb(x) push_back(x)
#define pob() pop_back()
int main() {
	speed
	ll t;cin>>t;
	while(t--){
		ll a;cin>>a;
		ll ans = a;
		string s;cin>>s;
		for(ll i = 1;i<a;i++){
			if(s[i]!=s[i-1]){
				ans+=i;
			}
		}
		cout<<ans<<"\n";
	}
}
