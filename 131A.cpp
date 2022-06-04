using namespace std;
#define ll long long
#define speed ios_base::sync_with_stdio(0);cin.tie(NULL);
#define pi pair<int,int>
#define pb(x) push_back(x)
#define pob() pop_back()

string changecase(string p){
	for(int i = 0;i<p.length();i++){
		if(isupper(p[i])){
			p[i] = tolower(p[i]);
		}
		else p[i] = toupper(p[i]);
	}
	return p;
}
int main(){
	speed
	string s;cin>>s;
	if(islower(s[0])){
		bool everythinglower = true;
		for(int i = 1;i<s.length();i++){
			if(islower(s[i])){
				everythinglower = false;
				break;
			}
		}
		if(!everythinglower){
			cout<<s;
		}
		else cout<<changecase(s);
	}
	else{
		bool anythingup = true;
		for(int i = 0;i<s.length();i++){
			if(islower(s[i])){
				anythingup = false;
				break;
			}
		}
		if(!anythingup){
			cout<<s;
		}
		else cout<<changecase(s);
	}

}
