#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int t;
	cin>>t;
	while (t--) {
		int n, k;
		cin >> n >>k;
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		ll sum = 0;
		for (int i = 0; i < k; i++) sum += a[i];
		ll maxx = sum;
		int idx = 0;
		for (int i = k; i < n; i++) {
			sum += a[i] - a[i - k];
			if (sum > maxx) {
				maxx = sum;
				idx = i - k + 1;
			}
		}
		for (int i = idx; i < idx + k; i++) {
			cout << a[i] << " ";
		}
		cout<<endl;
	}
}

/*

*/

