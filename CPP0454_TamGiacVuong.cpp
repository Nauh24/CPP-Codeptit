#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll check(ll a, ll b) {
	ll c = a * a + b * b;
	ll x = sqrt(c);
	if ((ll) x * x == c) return x;
	else return 0;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n; cin >> n;
		ll a[n];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		bool ok = false;
		sort(a, a + n);
		for (int i = 0; i < n - 2; i++) {
			for (int j = i + 1; j < n - 1; j++) {
				ll x = check(a[i], a[j]);
				if(binary_search(a + j + 1, a + n, x)) {
					ok = true;
					break;
				}
			}
		}
		if (!ok) cout << "NO";
		else cout << "YES";
		cout<<endl;
	}
}

/*

*/

