#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >>t;
	while(t--) {
		int n;
		cin >> n;
		int a[n + 1];
		int d[n + 1];
		int maxx = 0;
		for (int i = 1; i <= n; i++) {
			cin >> a[i];
			d[i] = 1;
		}
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j < i; j++) {
				if (a[i] > a[j]) {
					d[i] = max(d[i], d[j] + 1);
				}
			}
			maxx = max(maxx, d[i]);
		}
		cout << maxx;
		cout<<endl;
	}
}

/*

*/

