#include <bits/stdc++.h>
using namespace std;
#define int long long
#define speed ios_base::sync_with_stdio(0);cin.tie(NULL);
typedef pair<int,int>pi;
int32_t main(){
    pi b;
    for(int i = 0;i<5;i++){
        for(int j = 0;j<5;j++){
            int a;cin>>a;
            if(a==1){
                b = pi(i,j);
            }
        }
    }
    cout<<abs(b.first-2)+abs(b.second-2);
}
