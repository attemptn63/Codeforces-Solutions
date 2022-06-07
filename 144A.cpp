#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define speed ios_base::sync_with_stdio(0);cin.tie(NULL);
#define pi pair<int,int>
#define pb(x) push_back(x)
#define pob() pop_back()

int main(){
	speed
	ll n;cin>>n;
	vector<ll>v;
	for(ll i = 0;i<n;i++){
		ll a;cin>>a;
		v.pb(0-a);
	}
	pair<vector<ll>::iterator, vector<ll>::iterator> minmax = minmax_element(v.begin(),v.end());
	ll largest = minmax.first - v.begin();
	ll smallest = minmax.second - v.begin();
	if(largest<smallest){
		 cout<<n+largest-smallest-1;
	}
	else cout<<n+largest-smallest-2;
}
