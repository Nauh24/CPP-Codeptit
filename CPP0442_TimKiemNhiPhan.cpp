#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while (t--) {
		int n, x;
		cin>>n>>x;
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin>>a[i];
		}
		auto pos = find(a.begin(), a.end(), x); 
		if (pos != a.end()) cout<<1;
		else cout<<-1;
		cout<<endl;
	}
}

/*

*/

