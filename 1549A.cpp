#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n;cin>>n;
	for(int i = 0;i<n;i++){
		int a;cin>>a;
		if(a%2==1){
			cout<<2<<" "<<(a-1)<<endl;
		}
		else cout<<2<<" "<<a<<endl;
	}
}
