#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pi pair<int,int>
#define s second
#define f first
main(){
    int n;cin>>n;
    int arr[n],sum=0;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    sort(arr,arr+n,greater<int>());
    int ans = 0,coinnum=0;
    while(1){
        coinnum+=arr[ans];
        ans++;
        if(coinnum>sum-coinnum)break;
    }
    cout<<ans;
}
