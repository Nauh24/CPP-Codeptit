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
		for (int i = 0; i < n; i++) {
			cin>>a[i];
			b[a[i]] = 1;
		}
		sort(a.begin(), a.end());
		int cnt = 0;
		for (int i = a[0]; i <= a[a.size() - 1]; i++) {
			if (b[i] == 0) cnt++;
		}
		cout<<cnt;
		cout<<endl;
	}
}

/*

*/

