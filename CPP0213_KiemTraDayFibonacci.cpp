#include <bits/stdc++.h>
using namespace std;

vector<bool> v(1001, false);
void fibo() {
	int f1 = 0, f2 = 1;
	v[f1] = true;
	v[f2] = true;
	while (true) {
		int f = f1 + f2;
		if (f > 1000) break;
		v[f] = true;
		f1 = f2;
		f2 = f;
	}
}

int main() {
	int t;
	cin >> t;
	fibo();
	while (t--) {
		int n;
		cin >> n;
		int a[n];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		for (int i = 0; i < n; i++) {
			if (v[a[i]]) cout << a[i] << " ";
		}
 		cout<<endl;
	}
}
