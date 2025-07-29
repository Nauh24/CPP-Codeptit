#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll chiaDu(ll a, ll b, ll c) {
	if (b == 0) return 0;
	ll x = chiaDu(a, b / 2, c);
	if (b % 2 == 0) return x * 2 % c;
	return (x * 2 + a) % c;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		ll a, b, c;
		cin >> a >> b >> c;
		cout << chiaDu(a, b, c);
		cout<< endl;
	}
}

/*

*/

