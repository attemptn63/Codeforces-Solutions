#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(string S)
{
    string P = S;
    reverse(P.begin(), P.end());
    if (S == P) {
        return true;
    }
    else {
        return false;
    }
}
 
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;cin>>n;
	for(int i = 0;i<n;i++){
		int a,k;
		string s;
		cin>>a>>k>>s;
		bool palindrome = isPalindrome(s);
		if(palindrome){
			cout<<1<<endl;
		}
		else if(k>= 1){
			cout<<2<<endl;
		}
		else cout<<1<<endl;
	}
}
