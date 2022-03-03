#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define SPEED ios_base::sync_with_stdio(0);cin.tie(NULL);
int main() {
	SPEED
	ll n,m,a,x,y,sum;
    cin >> n >> m >> a;
    x = n / a;
    y = m / a;
    if (n % a != 0) {
        x = x + 1;
    }
    if (m % a != 0) {
        y = y + 1;
    }
    sum = x * y;
    cout << sum;
}
