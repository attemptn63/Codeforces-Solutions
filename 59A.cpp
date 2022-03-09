#include <bits/stdc++.h>
using namespace std;
#define int long long
#define speed ios_base::sync_with_stdio(0);cin.tie(NULL);
typedef pair<int,int>pi;
int32_t main(){
    string s;cin>>s;
    int upcount = 0,locount = 0;
    for(int i = 0;i<s.length();i++){
        if(s[i]<91){
            upcount++;
        }
        else locount++;
    }
    if(upcount>locount){
        for(int i = 0;i<s.length();i++){
            s[i] = toupper(s[i]);
        }
    }
    else{
        for(int i = 0;i<s.length();i++){
            s[i]=tolower(s[i]);
        }
    }
    cout<<s;
}
