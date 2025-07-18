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
		int min = a[0];
		int max_dis = INT_MIN;
		for (int i = 1; i < n; i++) {
			if (a[i] < a[i - 1]) {
				min = a[i];
			}
			max_dis = max(max_dis, a[i] - min);
		} 
		if (max_dis == 0) cout<<-1;
		else cout<<max_dis;
		cout<<endl;
	}
}

/*

*/

