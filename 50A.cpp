#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define SPEED ios_base::sync_with_stdio(0);cin.tie(NULL);
int main() {
	SPEED
	int a,b;cin>>a>>b;
	if((a*b)%2==0){
		cout<<(a*b)/2;
	}
	else cout<<((a*b)-1)/2;
}
