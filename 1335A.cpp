#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define speed ios_base::sync_with_stdio(0);cin.tie(NULL);
#define pi pair<ll,ll>
#define pb(x) push_back(x)
#define pob() pop_back()

int main() {
	speed
	int n;cin>>n;
	for(int i = 0;i<n;i++){
		int x;cin>>x;
		x%2==0?(x/=2):(x+=1)/=2;
		x-=1
		cout<<x<<"\n";
	}
}
