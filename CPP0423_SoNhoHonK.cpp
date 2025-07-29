#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;
		vector<int> a(n);
		int cnt = 0;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			if (a[i] <= k) cnt++;
		}
		int minn = INT_MAX;
		int d;
		for (int i = 0; i <= n - cnt; i++) {
			d = 0;
			for (int j = i; j < i + cnt; j++) {
				if (a[j] <= k) d++;	
			}
			minn = min(minn, cnt - d);
		}
		
		cout << minn;
		cout<< endl;
	}
}
