#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while (t--) {
		int n, k;
		cin>>n>>k;
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin>>a[i];
		}
		
		int cnt = 0;
		for (int i = 0; i < n; i++) {
			int x = k - a[i];
			for (int j = i + 1; j < n; j++) {
				if (a[j] == x) cnt++;
			}
		}
		cout<<cnt;
		cout<<endl;
	}
}

/*

*/

