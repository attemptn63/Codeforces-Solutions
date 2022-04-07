#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pi pair<int,int>
#define s second
#define f first
main(){
    int n;cin>>n;
    pi arr[n];
    for(int i = 0;i<n;i++){
        int a;cin>>a;
        arr[i]=pi(a,i+1);
    }
    sort(arr,arr+n);
    for(int i = 0;i<n;i++){
        cout<<arr[i].s<<" ";
    }
}
