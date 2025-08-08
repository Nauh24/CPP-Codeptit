#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		vector<int> a(n), b(m);
		set<int> hop, giao;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			hop.insert(a[i]);
		}
		
		for (int i = 0; i < m; i++) {
			cin >> b[i];
			if (find(a.begin(), a.end(), b[i]) != a.end()) giao.insert(b[i]);
			hop.insert(b[i]);
		}
		
		for (auto i: hop) cout << i << " ";
		cout << endl;
		for (auto i : giao) cout << i << " ";
		cout<<endl;
	}
}

/*

*/

