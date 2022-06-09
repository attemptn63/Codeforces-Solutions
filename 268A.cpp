#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define speed ios_base::sync_with_stdio(0);cin.tie(NULL);
#define pi pair<ll,ll>
#define pb(x) push_back(x)
#define pob() pop_back()

int main() {
	speed
	int n,ans = 0;cin>>n;
	pi arr[n];
	for(int i = 0;i<n;i++){
		int a,b; cin>>a>>b;
		arr[i] = pi(a,b);
	}
	for(int i = 0;i<n;i++){
		for(int j = 0;j<n;j++){
			if(arr[i].first == arr[j].second)ans++;
		}
	}
	cout<<ans;
}
