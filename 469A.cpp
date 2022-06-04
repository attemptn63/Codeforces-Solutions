#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define speed ios_base::sync_with_stdio(0);cin.tie(NULL);
#define pi pair<int,int>
#define pb(x) push_back(x)
#define pob() pop_back()
int main(){
	speed
	int n;cin>>n;
	set<int>s;
	int a;cin>>a;
	for(int i = 0;i<a;i++){
		int x;cin>>x;
		s.insert(x);
	}
	int b;cin>>b;
	for(int i = 0;i<b;i++){
		int x;cin>>x;
		s.insert(x);
	}
	if(s.size()==n){
		cout<<"I become the guy.";
	}
	else cout<<"Oh, my keyboard!";

}
