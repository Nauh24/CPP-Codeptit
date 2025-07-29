#include <bits/stdc++.h>
using namespace std;

int x;
bool cmp(int a, int b) {
	return abs(a - x) < abs(b - x);
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n >> x;
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		stable_sort(a.begin(), a.end(), cmp);
		for (int i : a) cout << i << " ";
		cout << endl;
	}
}

/*

*/

