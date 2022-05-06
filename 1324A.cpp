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
	bool check = true;
	for(int i = 0;i<t;i++){
		check = true;
		int n;cin>>n;
		for(int i = 0;i<n;i++){
			cin>>arr[i];
		}
		for(int i = 0;i<n;i++){
			for(int j = 0;j<n;j++){
				if((arr[j]-arr[i])%2!=0){
					check = false;
					break;
				}
			}
			if(check == false)break;
		}
		if(check == false){
			cout<<"NO\n";
		}
		else cout<<"YES\n";
	}
}



