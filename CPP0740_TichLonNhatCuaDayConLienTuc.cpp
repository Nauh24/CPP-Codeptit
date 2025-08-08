#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int a[n];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		long long maxx = INT_MIN;
		for (int i = 0; i < n; i++) {
			ll tmp = 1;
			for (int j = i; j < n; j++) {
				tmp *= a[j];
				maxx = max(maxx, tmp);
			}
		}
		cout<<maxx;
		cout<<endl;
	}
}

/*

*/

