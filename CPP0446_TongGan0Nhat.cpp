#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin>>a[i];
		}
		int minn = INT_MAX;
		for (int i = 0; i < n; i++) {
			for (int j = i + 1; j < n; j++) {
				int sum = a[i] + a[j];
				if (abs(sum) < abs(minn)) {
					minn = sum;
				}
			}
		}
		cout<<minn;
		cout<<endl;
	}
}

/*

*/

