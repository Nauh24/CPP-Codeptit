#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		vector<int> a(n);
		map<int, int> b;
		for (int i = 0; i < n - 1; i++) {
			cin>>a[i];
			b[a[i]] = 1;
		}
//		sort(a.begin(), a.end());
		for (int i = 1; i <= n; i++) {
			if (b[i] == 0) {
				cout<<i;
				break;
			}
		}
		cout<<endl;
	}
}

/*

*/

