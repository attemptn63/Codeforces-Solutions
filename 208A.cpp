#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define speed ios_base::sync_with_stdio(0);cin.tie(NULL);
#define pi pair<int,int>
#define pb(x) push_back(x)
#define pob() pop_back()

int main() {
	string s;
	int flag = 1;
	cin >> s;
	for(int i = 0;i < s.size(); i++){
	    if(s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B'){
	        i += 2;
	        if(!flag){
	            cout<<" ";
	        }
	        continue;
	    }else {
	        flag = 0;
	        cout << s[i];
	    }
	}
	return 0;
}
