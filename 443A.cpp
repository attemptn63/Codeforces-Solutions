#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define speed ios_base::sync_with_stdio(0);cin.tie(NULL);
#define pi pair<int,int>
#define pb(x) push_back(x)
#define pob() pop_back()
int main() {
	speed
	string s;
	getline(cin,s);
	set<char>st;
	for(int i = 0;i<s.size();i++){
		if(s[i]!=' '){
			st.insert(s[i]);
		}
	}
	st.erase(' ');
	st.erase(',');
	st.erase('{');
	st.erase('}');	
	cout<<st.size();
}
