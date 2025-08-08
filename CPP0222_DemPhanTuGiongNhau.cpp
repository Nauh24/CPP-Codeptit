#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while (t--) {
		int n;
		cin>>n;
		int a[n][n];
		map<int, int> map;
		
		for (int i = 0;i < n; i++) {
			set<int> set;
			for (int j = 0; j < n; j++) {
				cin >> a[i][j];
				set.insert(a[i][j]);
			}
			for (int i : set) map[i]++;
		}
		
		int cnt = 0; 
		for (auto it: map) {
			if(it.second == n) cnt++;
		}
		
		cout<<cnt;		
		cout<<endl;
	}
}

/*

*/

