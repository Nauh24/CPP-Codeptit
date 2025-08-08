#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		
		ll cnt = 0;
		while (true) {
			int d = 0;
			for (int i = 0; i < n; i++) {
				if (a[i] % 2 == 1) {
					a[i]--;
					cnt++;
				}
				if (a[i] == 0) d++;
			}
			if (d == n) break;
			for (int &x : a) x /= 2;
			cnt++;
		}
		cout << cnt;
		cout<<endl;
	}
}

/*

*/

