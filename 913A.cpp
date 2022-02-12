#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n,m; cin>>n>>m;
	if(n>=27){
		cout<<m;
	}
	else{
		n = pow(2,n);
		cout<<m%n;
	}
}
