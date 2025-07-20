#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		int a[n];
		map<int, int> map;
		int x = 0;
		for (int i = 0; i < n; i++) {
			cin>>a[i];
		}
		for (int i = 0; i < n; i++) {
			map[a[i]]++;
			if (map[a[i]] == 2) {
				x = a[i];
				break;
			}
		}
		if (x == 0) cout<<-1;
		else cout<<x;
		cout<<endl;
	}
}

/*

*/

