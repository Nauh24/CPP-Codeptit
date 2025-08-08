#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k, b;
	cin >> n >> k >> b;
	bool c[n + 1] = {false};
	int a[n];
	for (int i = 0; i < b; i++) {
		cin >> a[i];
		c[a[i]] = true;
	}
	int minn = INT_MAX;
	for (int i = 1; i <= n - k + 1; i++) {
		int cnt = 0;
		for (int j = i; j < i + k; j++) {
			if (c[j]) cnt++;
		}
		minn = min(minn, cnt);
	}
	cout<< minn;
}

/*

*/

