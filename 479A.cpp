#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define speed ios_base::sync_with_stdio(0);cin.tie(NULL);
#define pi pair<int,int>
#define pb(x) push_back(x)
#define pob() pop_back()
int main(){
	speed
	int a,b,c;
	cin>>a>>b>>c;
	if(a!=1&&b!=1&&c!=1){
		cout<<a*b*c;
	}
	else if(a==1&&b!=1&&c!=1){
		cout<<(a+b)*c;
	}
	else if(a!=1&&b==1&&c!=1){
		cout<<max((a+b)*c,a*(b+c));
	}
	else if(a!=1&&b!=1&&c==1){
		cout<<a*(b+c);
	}
	else if(a==1&&b==1&&c==1){
		cout<<3;
	}
	else if(a==1&&b==1&&c!=1){
		cout<<2*c;
	}
	else if(a==1&&b!=1&&c==1){
		cout<<2+b;
	}
	else if(a!=1&&b==1&&c==1){
		cout<<2*a;
	}
}
