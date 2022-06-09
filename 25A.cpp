//messy but works
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define speed ios_base::sync_with_stdio(0);cin.tie(NULL);
#define pi pair<int,int>
#define pb(x) push_back(x)
#define pob() pop_back()

int main() {
	speed
	ll n;cin>>n;
	ll a,b,c;
	cin>>a>>b>>c;
	a%=2;b%=2;c%=2;
	int parity;
	if(a==b&&b==c)parity = a;
	else{
		if(a!=b&&a!=c){
			cout<<1;
			return 0;
		}
		if(a!=b&&b!=c){
			cout<<2;
			return 0;
		}
		else cout<<3;
		return 0;
	}
	for(int i = 4;i<=n;i++){
		int q;cin>>q;
		if(q%2==parity)continue;
		else{
			cout<<i;
			return 0;
		}
	}
}
