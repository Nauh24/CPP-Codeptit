#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll mod_pow(ll x, ll y, ll p) {
	if (y == 0) return 1;
	if (y == 1) return x % p;
	ll tmp = mod_pow(x, y / 2, p);
	if (y % 2 == 1) {
		return ((tmp * tmp) % p * (x % p)) % p; 
	}
	else return (tmp * tmp) % p;
}

int main() {
	int t;
	cin >>t;
	while (t--) {
		ll x, y, p;
		cin >> x >> y >> p;
		cout << mod_pow(x, y, p);
		cout<<endl;
	}
}

/*

*/

