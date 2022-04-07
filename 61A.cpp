#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pi pair<int,int>
#define s second
#define f first
main(){
    string s1,s2;cin>>s1>>s2;
    for(int i = 0;i<s1.length();i++){
        if(s1[i]!=s2[i])cout<<1;
        else cout<<0;
    }
}
