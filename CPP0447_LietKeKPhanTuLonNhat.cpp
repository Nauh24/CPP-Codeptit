#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n, k;
		cin>>n>>k;
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin>>a[i];
		}
		sort(a.begin(), a.end(), greater<int>());
		int i = 0;
		while (k--) {
			cout<<a[i]<<" ";
			i++;
		}
		cout<<endl;
	}
}

/*

*/

