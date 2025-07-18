#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int t;
	cin>>t;
	while (t --) {
		int n, m;
		cin>>n>>m;
		ll a[n], b[m];
		ll maxA = INT_MIN;
		ll minB = INT_MAX;
		
		for (int i = 0; i < n; i++) {
			cin>>a[i];
			maxA = max(maxA, a[i]); 
		}
		
		for (int i = 0; i < m; i++) {
			cin>>b[i];
			minB = min(minB, b[i]);
		}
		cout<<maxA * minB;
		cout<<endl;
	}
}

/*

*/

