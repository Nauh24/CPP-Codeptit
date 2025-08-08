#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int a[n + 1], b[n + 1];
		for (int i = 1; i <= n; i++) {
			cin >> a[i];
			a[i] += a[i - 1];
		}
		
		for (int i = 1; i <= n; i++) {
			cin >> b[i];
			b[i] += b[i - 1];
		}
		
		int maxx = INT_MIN;
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= i; j++) {
				if (a[i] - a[j - 1] == b[i] - b[j - 1]) {
					maxx = max(maxx, i - j + 1);
				}
			}
		}
		cout<< maxx;
		cout<<endl;
	}
}

/*

*/

