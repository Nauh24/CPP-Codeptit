#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int t;
	cin>>t;
	while (t--) {
		int n1, n2, n3;
		cin>>n1>>n2>>n3;
		ll a[n1], b[n2], c[n3];
		for (int i = 0; i < n1; i++) {
			cin>>a[i];
		}
		for (int i = 0; i < n2; i++) {
			cin>>b[i];
		}
		for (int i = 0; i < n3; i++) {
			cin>>c[i];
		}
		vector<ll> v;
		int i = 0, j = 0, k = 0;
		while (i < n1 && j < n2 && k < n3) {
			if (a[i] == b[j] && b[j] == c[k]) {
				v.push_back(a[i]);
				i++;
				j++;
				k++;
			}
			else {
				ll minn = min({a[i], b[j], c[k]});
				if (a[i] == minn) i++;
				if (b[j] == minn) j++;
				if (c[k] == minn) k++;
			}
		}
		
		if (v.empty()) cout<<-1;
		else {
			for (auto i : v) cout<<i<<" ";
		}
		cout<<endl;
	}
}

/*

*/

