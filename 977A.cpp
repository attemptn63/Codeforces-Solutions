#include <bits/stdc++.h>
using namespace std;
#define int long long
#define speed ios_base::sync_with_stdio(0);cin.tie(NULL);
typedef pair<int,int>pi;
int32_t main(){
    int a,b;cin>>a>>b;
    for(int i = 0;i<b;i++){
        string s = to_string(a);
        if(s.back()=='0'){
            a/=10;
        }
        else a--;
    }
    cout<<a;
}
