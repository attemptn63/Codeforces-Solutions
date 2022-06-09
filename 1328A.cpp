#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define speed ios_base::sync_with_stdio(0);cin.tie(NULL);
#define pi pair<int,int>
#define pb(x) push_back(x)
#define pob() pop_back()

int main() {
	speed
	int t;cin>>t;
	for(int i = 0;i<t;i++){
		int a,b;cin>>a>>b;
		int c = a%b;
		if(c==0)cout<<0<<"\n";
		else cout<<b - c<<"\n";
	}
}
