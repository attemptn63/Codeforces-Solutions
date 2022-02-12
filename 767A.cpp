#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,x;
    cin>>n;
    priority_queue <int>pq;
    int cur=n;
    for(int i=0;i<n;i++){
        cin>>x;
        pq.push(x);
        while(!pq.empty() and pq.top() == cur){
            cout<<cur<<" ";
            pq.pop();
            cur--;
        }
        cout<<"\n";
    }
}
