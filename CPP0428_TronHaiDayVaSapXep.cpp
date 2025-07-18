#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n, m;
		cin>>n>>m;
		vector<int> a(n);
		vector<int> b(n);
		vector<int> hop;
		for (int i = 0; i < n; i++) {
			cin>>a[i];
			hop.push_back(a[i]);
		}
		
		for (int i = 0; i < m; i++) {
			cin>>b[i];
			hop.push_back(b[i]);
		}
		
		sort(hop.begin(), hop.end());
		for (int i : hop) cout<<i<<" ";
		cout<<endl;
	}
}

/*

*/

