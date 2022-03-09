#include <bits/stdc++.h>
using namespace std;
#define int long long
#define speed ios_base::sync_with_stdio(0);cin.tie(NULL);
typedef pair<int,int>pi;
int32_t main(){
    speed
    int n,ans = 0;cin>>n;
    string s;cin>>s;
    for(int i = 0;i<n - 1;i++){
        if(s[i]==s[i+1])ans++;
    }
    cout<<ans;
}
