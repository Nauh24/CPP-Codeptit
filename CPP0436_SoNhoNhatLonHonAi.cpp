#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int a[n];
		vector<string> v;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			v.push_back(to_string(a[i]));
		}
		sort(a, a + n);
		for (int i = 0; i < n; i++) {
			auto it = upper_bound(a, a + n, stoi(v[i]));
			if (it != a + n) cout << *it << " ";
			else cout << "_ ";
		}

		cout << endl;
	}
}

/*

*/

