#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pi pair<int,int>
#define speed ios_base::sync_with_stdio(NULL);cin.tie(0);
main(){
    speed
    int n;cin>>n;
    while(1){
        n++;
        int a = n/1000;
        int b = n/100 % 10;
        int c = n/10 % 10;
        int d = n%10;
        if (a != b && a != c && a != d && b != c && b != d && c != d)break;
    }
    cout<<n;
}
