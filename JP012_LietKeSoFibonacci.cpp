#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int t;
	cin >> t;
	ll f[93];
	f[1] = 1;
	f[2] = 1;
	for (int i = 3; i <= 92; i++) {
		f[i] = f[i - 1] + f[i - 2];
	}
	while(t--) {
		int a, b;
		cin >> a>>b;
		for (int i = a; i <= b; i++) {
			cout << f[i] << " ";
		}
		cout<<endl;
	}
}
