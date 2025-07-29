#include <bits/stdc++.h>
using namespace std;

int n;
int a[21];

void Try(int i) {
	for (int j = 0; j <= 1; j++) {
		a[i] = j;
		if (i == n) {
			for (int x = 1; x <= n; x++) {
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
	while (t--) {
		cin >> n;
		Try(1);
		cout<< endl;
	}
}

/*

*/

