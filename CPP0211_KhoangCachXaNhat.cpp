#include <bits/stdc++.h>
using namespace std;

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
		int maxx = 0;
		for (int i = 0; i < n; i++) {
			for (int j = n - 1; j > i; j--) {
				if(a[i] <= a[j]) {
					maxx = max(maxx, j - i);
					break;
				}
			}
		}
		cout<<maxx;
		cout<<endl;
	}
}

/*

*/

