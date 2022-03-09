#include <bits/stdc++.h>
using namespace std;
#define int long long
#define speed ios_base::sync_with_stdio(0);cin.tie(NULL);
typedef pair<int,int>pi;
int32_t main(){
    speed
    int a,b;cin>>a>>b;
    int i = 0;
    while(a<=b){
        a*=3;
        b*=2;
        i++;
    }
    cout<<i;
}
