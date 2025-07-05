#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		int a[n];
		vector<bool> v(n+1, false);
		for (int i = 0; i<n;i++) {
			cin>>a[i];
			if (a[i] > 0 && a[i] <= n+1) {
				v[a[i]] = true;
			}
		}
		for (int i = 1; i <= n + 1; i++) {
			if (!v[i]) {
				cout<<i<<endl;
				break;
			}
		}
		cout<<endl;
	}
}

/*
2
5
1 2 3 4 5
5
0 -10 1 3 -20
*/
