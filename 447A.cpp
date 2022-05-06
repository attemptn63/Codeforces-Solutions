#include <bits/stdc++.h>
using namespace std;
#define int long long
#define speed ios_base::sync_with_stdio(false);cin.tie(NULL); 
#define pi pair<int,int> 
#define pii pair<int,pi>
#define f first
#define s second	
bool arr[301];
main(){
	speed
	int p,n;cin>>p>>n;
	for(int i = 0;i<n;i++){
		int n;cin>>n;
		if(!arr[n%p]){
			arr[n%p] = true;
		}
		else {cout<<i+1;return 0;}
	}
	cout<<-1;
}
 
