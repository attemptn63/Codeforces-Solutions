#include <bits/stdc++.h>
using namespace std;
#define int long long
#define speed ios_base::sync_with_stdio(0);cin.tie(NULL);
int32_t main(){
    int n,k;cin>>n>>k;
    k-=1;
    int score[n];
    for(int i = 0;i<n;i++){
        cin>>score[i];
    }
    int check = score[k],ans = 0;
    for(int i = 0;i<n;i++){
        if(score[i]>0&&score[i]>=check){
            ans++;
        }
    }
    cout<<ans;
}
