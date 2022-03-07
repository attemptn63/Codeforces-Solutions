#include <bits/stdc++.h>
using namespace std;
#define int long long
#define speed ios_base::sync_with_stdio(0);cin.tie(NULL);
int32_t main(){
    int n,x = 0;cin>>n;
    string s;
    for(int i = 0;i<n;i++){
        cin>>s;
        if(s[1]=='+')x++;
        else x--;
    }
    cout<<x;
}
