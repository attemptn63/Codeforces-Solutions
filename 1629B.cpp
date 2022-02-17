#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n; cin>>n;
	for(int i = 0;i<n;i++){
		int a,b,c;
		cin>>a>>b>>c;
		int d = b - a + 1;
		int odd;
		if(d%2 == 0){
			odd = d/2;
		}
		else if(a%2==0){
			odd = d/2;
		}
		else odd = d/2 + 1;
		if(c == 0 && d == 1){
			if(a!=1){
				cout<<"YES"<<endl;
			}
			else cout<<"NO"<<endl;
			continue;
		}
		if(odd>c)cout<<"NO"<<endl;
		else cout<<"YES"<<endl;
	}
}
