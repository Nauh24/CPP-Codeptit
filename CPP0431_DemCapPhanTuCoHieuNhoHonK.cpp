#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;
		ll cnt = 0;
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		
		sort(a.begin(), a.end());
		for (int i = 0; i < n; i++) {
			auto it = lower_bound(a.begin() + i + 1, a.end(), a[i] + k);
			int pos = it - a.begin();
			cnt += (pos - i - 1);
		}
		cout<<cnt;
		cout<<endl;
	}
}

/*

*/

