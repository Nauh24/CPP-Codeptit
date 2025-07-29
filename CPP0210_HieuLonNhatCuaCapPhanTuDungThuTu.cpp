#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while (t--) {
		int n;
		cin>>n;
		int a[n];
		for (int i = 0; i < n; i++) {
			cin>>a[i];
		}
		int min_val = a[0];
		int max_dis = INT_MIN;
		for (int i = 1; i < n; i++) {
			if (a[i] > min_val) {
				max_dis = max(max_dis, a[i] - min_val);
			}
			min_val = min(min_val, a[i]);
		} 
		if (max_dis == INT_MIN) cout<<-1;
		else cout<<max_dis;
		cout<<endl;
	}
}

/*

*/

