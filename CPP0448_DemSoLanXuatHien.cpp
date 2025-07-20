#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n, x;
		cin>>n>>x;
		int a[n];
		map<int, int> map;
		for (int i = 0; i < n; i++) {
			cin>>a[i];
			map[a[i]]++;
		}
		if (map[x] == 0) cout<<-1;
		else cout<<map[x];
		cout<<endl;
	}
}

/*

*/

