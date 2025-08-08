#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		ll a[n + 1] = {0};
		ll sum = 0;
		for (int i = 1; i <= n; i++) {
			cin>>a[i];
			sum += a[i];
			a[i] += a[i - 1];
		}
		bool ok = false;
		for (int i = 1; i <= n; i++) {
			if (a[i - 1] == sum - a[i]) {
				ok = true;
				cout << i;
				break;
			}
		}
		if (!ok) cout << -1;
		cout<<endl;
	}
}

/*

*/

