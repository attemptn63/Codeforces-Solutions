#include <bits/stdc++.h>
using namespace std;
#define int long long
#define speed ios_base::sync_with_stdio(0);cin.tie(NULL);
int32_t main()
{
    int n;cin>>n;
    for(int i = 0;i<n;i++){
        string s;cin>>s;
        if(s.length()>10)cout<<s[0]<<s.length()-2<<s.back()<<"\n";
        else cout<<s<<"\n";
    }
    return 0;
}
