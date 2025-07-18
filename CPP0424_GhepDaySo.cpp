#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while (t--) {
		int k, n;
		cin>>k>>n;
		vector<int> v;
		for (int i = 0; i < k * n; i++) {
			int x;
			cin>>x;
			v.push_back(x);
		}
		sort(v.begin(), v.end());
		for (int i : v) cout<<i<<" ";
		cout<<endl;
	}
}

/*

*/

