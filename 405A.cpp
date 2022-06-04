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
	ll arr[n];
	for(int i = 0;i<n;i++){
		cin>>arr[i];
	}
	sort(arr,arr+n);
	for(int i = 0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
