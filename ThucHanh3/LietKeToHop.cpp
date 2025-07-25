#include <bits/stdc++.h>
using namespace std;

int n, k, a[21];

void Try(int i) {
	for (int j = a[i - 1] + 1; j <= n - k + i; j++) {
		a[i] = j;
		if (i == k) {
			for (int x = 1; x <= k; x++) {
				cout << a[x];
			}
			cout << " ";
		}
		else Try(i + 1);
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		n, k;
		cin >> n >> k;
		Try(1);
		cout<< endl;
	}
}

/*

*/

