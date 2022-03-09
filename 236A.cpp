#include <bits/stdc++.h>
using namespace std;
#define int long long
#define speed ios_base::sync_with_stdio(0);cin.tie(NULL);
typedef pair<int,int>pi;
int32_t main(){
    string st;
    cin>>st;
    set<char>s;
    for(int i = 0;i<st.length();i++){
        s.insert(st[i]);
    }
    if(s.size()%2==0){
        cout<<"CHAT WITH HER!";
    }
    else cout<<"IGNORE HIM!";
}
