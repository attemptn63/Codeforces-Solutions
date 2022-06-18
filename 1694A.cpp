#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define speed ios_base::sync_with_stdio(0);cin.tie(NULL);
#define pi pair<ll,ll>
#define pb(x) push_back(x)
#define pob() pop_back()
 
int main() {
	speed
	int t;cin>>t;
	for(int i = 0;i<t;i++){
		int a,b;cin>>a>>b;
		string s = "";
		if(a>=b){
			a -= b;
			if(a%2 == 0){
				a/=2;
				for(int j = 0;j<a;j++){
					s+="0";
				}
			}
			else{
				a+=1;a/=2;
				for(int j = 0;j<a;j++){
					s+="0";
				}
				a-=1;
			}
			
			for(int k = 0;k<b;k++){
				s+="10";
			}
			for(int k = 0;k<a;k++){
				s+="0";
			}
		}
		else{
			for(int k = 0;k<a;k++){
				s+="10";
			}
			b -= a;
			for(int k = 0;k<b;k++){
				s+="1";
			}
		}
		cout<<s<<"\n";
		
	}
}
