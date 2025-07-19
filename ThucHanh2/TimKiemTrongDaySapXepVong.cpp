#include <bits/stdc++.h>
using namespace std;


int main() {
	int t;
	cin>>t;
	while (t--) {
		int n, x;
		cin>>n>>x;
		vector<int> v(n);
		for (int i = 0; i < n; i++) {
			cin>>v[i];
		}
		auto it = find(v.begin(), v.end(), x);
		cout<<it - v.begin() + 1;
		cout<<endl;
	}
}

/*

*/

