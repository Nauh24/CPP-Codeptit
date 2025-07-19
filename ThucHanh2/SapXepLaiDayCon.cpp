#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		int a[n];
		vector<int> v;
		
		for (int i = 0; i < n; i++) {
			cin>>a[i];
			v.push_back(a[i]);
		}
		sort(v.begin(), v.end());
		int l = 0, r = 0;
		for (int i = 0; i < n; i++) {
			if (a[i] != v[i]) {
				l = i + 1;
				break;
			}
		}
		
		for (int i = n - 1; i >= 0; i--) {
			if (a[i] != v[i]) {
				r = i + 1;
				break;
			}
		}
		
		cout<<l<<" "<<r;
		cout<<endl;
	}
}

/*

*/

