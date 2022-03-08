#include <bits/stdc++.h>
using namespace std;
#define int long long
#define speed ios_base::sync_with_stdio(0);cin.tie(NULL);
typedef pair<int,int>pi;
int32_t main(){
    string a,b;
    cin>>a>>b;
    int i = 0;
    while(a[i]){
        a[i] = tolower(a[i]);
        i++;
    }
    i = 0;
    while(b[i]){
        b[i] =tolower(b[i]);
        i++;
    }
    if(a==b){
        cout<<0;
    }
    else if(a>b)cout<<1;
    else cout<<-1;
}
