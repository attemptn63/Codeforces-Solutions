
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define speed ios_base::sync_with_stdio(false);cin.tie(NULL); 
#define pi pair<int,int> 
#define pii pair<int,pi>
#define f first
#define s second	
main(){
	speed
	int q;cin>>q;
	while(q--){
		int n;cin>>n;
		int sum = 0;
		while(n--){
			int a;cin>>a;
			if(a<=2048)sum+=a;
		}
		cout<<(sum>=2048LL?"YES":"NO")<<"\n";
	}
}
