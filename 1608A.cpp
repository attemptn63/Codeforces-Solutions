#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t; cin>>t;
	for(int i = 0;i<t;i++){
		int n;
		cin>>n;
		if(n == 1){
			cout<<1<<endl;
			continue;
		}
		else if(n == 2){
			cout<<2<<" "<<3<<endl;
			continue;
		}
		else{
			for(int j = 2;j<=n+1;j++){
				cout<<j<<" ";
			}
			cout<<endl;
		}
	}
}
