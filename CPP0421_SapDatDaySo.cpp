#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int t;
	cin>>t;
	while (t--) {
		int n;
		cin>>n;
		ll a[n];
		unordered_set<ll> set;
		for (ll i = 0; i < n; i++) {
			cin>>a[i];
			set.insert(a[i]);
		}
		
		for (ll i = 0; i < n; i++) {
			if (set.count(i)) {
				cout<<i<<" ";
			}
			else cout<<-1<<" ";
		}
		cout<<endl;
	}
}

/*

*/

