#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		ll a[n];
		for (int i = 0; i < n;i++) {
			cin >> a[i];
		}
		ll maxx = a[0];
		ll res = a[0];
		for (int i = 1; i < n; i++) {
			maxx = max(maxx + a[i], a[i]);
			res = max(res, maxx);
		}
		
		cout << res;
		cout<< endl;
	}
}

/*

*/

