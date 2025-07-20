#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		vector<int> a(n);
		set<int> set;
		for (int i = 0; i < n; i++) {
			cin>>a[i];
			set.insert(a[i]);
		}
		sort(a.begin(), a.end());
		if (set.size() == 1) cout<<-1;
		else {
			int d1 = a[0]; 
			int d2;
			for (int i = 1; i < n; i++) {
				if (a[i] != d1) {
					d2 = a[i];
					break;
				}
			}
			cout<<d1<<" "<<d2;
		}
		cout<<endl;
	}
}

/*

*/

