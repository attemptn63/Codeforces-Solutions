#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pi pair<int,int>
#define speed ios_base::sync_with_stdio(NULL);cin.tie(0);
main(){
    speed
    char c;
    int n;cin>>n;
    int acount = 0,dcount = 0;
    string s;cin>>s
    for(int i = 0;i<n;i++){
        if(s[i]=='A')acount++;
        else dcount++;
    }
    if(acount>dcount)cout<<"Anton";
    else if(acount==dcount)cout<<"Friendship";
    else cout<<"Danik";
}
