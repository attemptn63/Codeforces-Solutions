#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t,n; cin>>t;
	for(int i = 0;i<t;i++){
		cin>>n;
		string s;
		cin>>s;
		if(n>2){
			cout<<"NO"<<endl;
		}
		else if(n == 1){
			cout<<"YES"<<endl;
		}
		else if(s[0] == s[1]){
			cout<<"NO"<<endl;
		}
		else cout<<"YES"<<endl;
	}
}
