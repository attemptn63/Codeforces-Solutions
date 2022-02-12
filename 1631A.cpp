#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;cin>>n;
	for(int i = 0;i<n;i++){
		int a; cin>>a;
		int arr1[a],arr2[a],x;
		for(int j = 0;j<a;j++){
			cin>>arr1[j];
		}
		for(int j = 0;j<a;j++){
			cin>>arr2[j];
		}
		for(int j = 0;j<a;j++){
			if(arr1[j] > arr2[j]){
				x = arr1[j];
				arr1[j] = arr2[j];
				arr2[j] = x;
			}
		}
		sort(arr1,arr1+a,greater<int>());
		sort(arr2,arr2+a,greater<int>());
		cout<<arr1[0]*arr2[0]<<endl;
	}
}
