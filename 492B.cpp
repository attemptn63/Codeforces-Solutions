#include<bits/stdc++.h>
using namespace std;
int n,l,m,i,a[1005];
main(){
	cin>>n>>l;
	for(;i<n;i++) cin>>a[i];
	sort(a,a+n);
	m=max(a[0],l-a[n-1])*2;
	for(i=1;i<n;i++) m=max(m,a[i]-a[i-1]);
	printf("%lf",m/2.0);
}
//copied because of stupid double shit
