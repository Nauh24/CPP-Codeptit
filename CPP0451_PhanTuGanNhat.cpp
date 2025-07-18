#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while (t--) {
		int n;
		cin>>n;
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin>>a[i];
		}
		int k, x;
		cin>>k>>x;
		int pos = lower_bound(a.begin(), a.end(), x) - a.begin();
		int left = pos - 1;
		int right = pos + 1;
		cout<<left;
		cout<<endl;
	}
}

/*
4
6
1 3 5 7 9 11
2 7
*/

