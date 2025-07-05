#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		int a[n];
		map<int,int> map;
		for (int i = 0; i < n; i++) {
			cin>>a[i];
			map[a[i]]++;
		}
		
		int cnt = 0;
		for (int i = 0; i < n; i++) {
			if (map[a[i]] > 1) cnt++;
		}
		cout<<cnt;
		cout<<endl;
	}
}

/*

*/

