#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n, m;
		cin>>n>>m;
		int a[n][m];
		bool b[n] = {false};
		bool c[m] = {false};
		for (int i = 0; i < n; i++) {
			for(int j = 0; j < m; j++) {
				cin>>a[i][j];
				if (a[i][j] == 1) {
					b[i] = true;
					c[j] = true;
				}
			}
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (b[i] || c[j]) cout<<1<<" ";
				else cout<<0<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
	}
}

/*

*/

