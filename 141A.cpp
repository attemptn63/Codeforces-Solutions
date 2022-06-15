#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define speed ios_base::sync_with_stdio(0);cin.tie(NULL);
#define pi pair<ll,ll>
#define pb(x) push_back(x)
#define pob() pop_back()

int main() {
	speed
	string a,b,c;
	cin>>a>>b>>c;
	multiset<char>s;
	for(int i = 0;i<c.size();i++){
		s.insert(c[i]);
	}
	for(int i = 0;i<a.size();i++){
		if(s.find(a[i]) == s.end()){
			cout<<"NO";
			return 0;
		}
		else s.erase(s.find(a[i]));
	}
	
	for(int i = 0;i<b.size();i++){
		if(s.find(b[i]) == s.end()){
			cout<<"NO";
			return 0;
		}
		else s.erase(s.find(b[i]));
	}
	if(!s.empty()){
		cout<<"NO";
		return 0;
	}
	cout<<"YES";
}
