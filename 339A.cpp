#include <bits/stdc++.h>
using namespace std;
#define int long long
#define speed ios_base::sync_with_stdio(0);cin.tie(NULL);
typedef pair<int,int>pi;
int32_t main(){
    int i = 0;
    vector<int>v;
    string s;
    cin>>s;
    for(int i = 0;i<s.length();i++){
        if(i%2==0){
            v.push_back(s[i] - 48);
        }
    }
    sort(v.begin(),v.end());
    cout<<v[0];
    for(int j = 1;j<v.size();j++){
        cout<<'+'<<v[j];
    }
}
