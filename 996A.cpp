#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define speed ios_base::sync_with_stdio(0);cin.tie(NULL);
#define pi pair<ll,ll>
#define pb(x) push_back(x)
#define pob() pop_back()

int main() {
	speed
	ll n;cin>>n;
	ll ans = 0;
	while(n>=100){
		n-=100;
		ans++;
	}
	while(n>=20){
		n-=20;
		ans++;
	}
	while(n>=10){
		n-=10;
		ans++;
	}
	while(n>=5){
		n-=5;
		ans++;
	}
	cout<<ans+n;
}
