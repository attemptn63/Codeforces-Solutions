#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> pi;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t; cin>>t;
	for(int i = 0;i<t;i++){
		int a,b; cin>>a>>b;
		int cost[a],ram[a];
		pi cur[a];
		for(int j = 0;j<a;j++){
			cin>>cost[j];
		}
		for(int j = 0;j<a;j++){
			cin>>ram[j];
		}
		for(int j = 0;j<a;j++){
			int c = cost[j],d = ram[j];
			cur[j]=pi(c,d);
		}
		sort(cur,cur+a);
		for(int j = 0;j<a;j++){
			if(cur[j].first>b){
				break;
			}
			else b+=cur[j].second;
		}
		cout<<b<<endl;
		
	}
}
