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
		int even = 0,odd = 0;
		for(int i = 0;i<n*2;i++){
			int a;cin>>a;
			if(a%2==0)even++;
			else odd++;
		}
		if(even == odd)cout<<"Yes\n";
		else cout<<"No\n";
	}
}



