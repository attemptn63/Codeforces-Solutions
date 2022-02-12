#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n,a; cin>>n;
	for(int i = 0;i<n;i++){
		cin>>a;
		if(a%7==0){
			cout<<a<<endl;
		}
		else if(a%7==1){
			if(a%10==0){
				cout<<a+6<<endl;
			}
			else cout<<a-1<<endl;
		}
		else if(a%7==2){
			if(a%10==0) cout<<a+5<<endl;
			else if((a-1)%10==0) cout<<a+5<<endl;
			else cout<<a-2<<endl;
		}
		else if(a%7==3){
			if(a%10==0) cout<<a+4<<endl;
			else if((a-1)%10==0) cout<<a+4<<endl;
			else if((a-2)%10==0) cout<<a+4<<endl;
			else cout<<a-3<<endl;
		}
		else if(a%7==4){
			if(a%10==0) cout<<a+3<<endl;
			else if((a-1)%10==0) cout<<a+3<<endl;
			else if((a-2)%10==0) cout<<a+3<<endl;
			else if((a-3)%10==0) cout<<a+3<<endl;
			else cout<<a-4<<endl;
		}
		else if(a%7==5){
			if(a%10==0) cout<<a+2<<endl;
			else if((a-1)%10==0) cout<<a+2<<endl;
			else if((a-2)%10==0) cout<<a+2<<endl;
			else if((a-3)%10==0) cout<<a+2<<endl;
			else if((a-4)%10==0) cout<<a+2<<endl;
			else cout<<a-5<<endl;
		}
		else if(a%7==6){
			if(a%10==0) cout<<a+1<<endl;
			else if((a-1)%10==0) cout<<a+1<<endl;
			else if((a-2)%10==0) cout<<a+1<<endl;
			else if((a-3)%10==0) cout<<a+1<<endl;
			else if((a-4)%10==0) cout<<a+1<<endl;
			else if((a-5)%10==0) cout<<a+1<<endl;
			else cout<<a-6<<endl;
		}
	}
}
