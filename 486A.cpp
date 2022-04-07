#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pi pair<int,int>
#define s second
#define f first
main(){
    int n;cin>>n;
    if(n%2==0)cout<<n/2;
    else cout<<(n-1)/2 - n;
}
