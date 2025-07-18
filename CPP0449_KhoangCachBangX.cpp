#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while (t--) {
		int n, x;
		cin>>n>>x;
		int a[n];
		set<int> set;
		for (int i = 0; i < n; i++) {
			cin>>a[i];
			set.insert(a[i]);
		}
		bool ok = false;
		for (int i = 0; i < n; i++) {
			if (set.count(a[i] - x)) ok = true; 
		}
		if (!ok) cout<<-1;
		else cout<<1;
		cout<<endl;
	}
}

/*

*/

