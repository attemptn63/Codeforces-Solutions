#include <bits/stdc++.h>
using namespace std;
#define int long long
#define speed ios_base::sync_with_stdio(false);cin.tie(NULL); 
#define pi pair<int,int> 
#define pii pair<int,pi>
#define f first
#define s second
int arr[101];
main(){
	speed
	int t;cin>>t;
	for(int i = 0;i<t;i++){
		int n;cin>>n;
		for(int i = 0;i<n;i++){
			cin>>arr[i];
		}
		sort(arr,arr+n,greater<int>());
		for(int i = 0;i<n;i++){
			cout<<arr[i]<<" ";
		}
		cout<<endl;
	}
}
