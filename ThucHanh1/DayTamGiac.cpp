#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while (t--) {
		int n;
		cin>>n;
		int a[n];
		int res = INT_MIN;
		for (int i = 0; i < n; i++) {
			cin>>a[i];
			res = max(res, a[i]);
		}
		cout<<res;
		cout<<endl;
	}
}

/*

*/

