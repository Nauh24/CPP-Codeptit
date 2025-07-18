#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while (t--) {
		int n, m;
		cin>>n>>m;
		int a[n], b[m];
		for (int i = 0; i < n; i++) cin>>a[i];
		for (int j = 0; j < m; j++) cin>>b[j];
		vector<int> hop, giao;
		int i = 0, j = 0;
		while (i < n && j < m) {
			if (a[i] < b[j]) {
				hop.push_back(a[i]);
				i++;
			}
			else if (a[i] > b[j]) {
				hop.push_back(b[j]);
				j++;
			}
			else {
				hop.push_back(a[i]);
				giao.push_back(a[i]);
				i++;
				j++;
			}
		}
		
		while (i < n) {
			hop.push_back(a[i]);
			i++;
		}
		
		while (j < m) {
			hop.push_back(b[j]);
			j++;
		}
		
		for (int i : hop) cout<<i<<" ";
		cout<<endl;
		for (int i : giao) cout<<i<<" ";
		
		cout<<endl;
	}
}

/*
1
5 3
1 2 3 4 5
1 2 3
*/

