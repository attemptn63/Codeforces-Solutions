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
		int a,b;cin>>a>>b;
		if(a==1||b==1)cout<<"finite\n";
		else{
			if(__gcd(a,b)==1)cout<<"finite\n";
			else cout<<"infinite\n";
		}
	}
}



