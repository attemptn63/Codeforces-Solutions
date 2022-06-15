#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define speed ios_base::sync_with_stdio(0);cin.tie(NULL);
#define pi pair<ll,ll>
#define pb(x) push_back(x)
#define pob() pop_back()

int main() {
	speed
	int n;cin>>n;
	ll ans = 0;
	for(int i = 0;i<n;i++){
		string s;cin>>s;
		if(s == "Tetrahedron")ans+=4;
		else if(s == "Cube")ans+=6;
		else if(s =="Octahedron")ans+=8;
		else if(s == "Dodecahedron")ans+=12;
		else ans+=20;
	}
	cout<<ans;
}
