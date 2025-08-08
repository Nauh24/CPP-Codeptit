#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool isPrime(ll n) {
	if (n < 2) return false;
	for (ll i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) return false;
	}
	return true;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		ll l, r;
		cin >> l >> r;
		ll cnt = 0;
		for (ll i = l; i <= sqrt(r); i++) {
			if (isPrime(i)) cnt++;
		}
		cout << cnt;
		cout<<endl;
	}
}

/*

*/

