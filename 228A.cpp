#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pi pair<int,int>
#define s second
#define f first
set<int>s;
main(){
    for(int i = 0;i<4;i++){
        int a;cin>>a;
        s.insert(a);
    }
    cout<<4-s.size();
}
