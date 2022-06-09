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
	set<char>s;
	for(int i = 0;i<n;i++){
		char c;cin>>c;
		s.insert(tolower(c));
	}
	if(s.size() == 26)cout<<"YES";
	else cout<<"NO";
}
