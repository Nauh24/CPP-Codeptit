#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 1e9 + 7;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n, x;
		cin >> n >> x;
		ll a[n];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}	
		ll sum = 0;
		ll tmp = 1;
		for (int i = n - 1; i >= 0; i--) {
			sum = (sum + tmp * a[i]) % MOD;
			tmp = tmp * x % MOD;
		}
		cout << sum;
		cout<<endl;
	}
}
