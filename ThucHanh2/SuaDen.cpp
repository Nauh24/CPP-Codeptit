#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k, b;
	cin>>n>>k>>b;
	bool a[n + 1] = {false};
	for (int i = 0; i < b; i++) {
		int x;
		cin>>x;
		a[x] = true;
	}
	int minn = INT_MAX;
	for (int i = 1; i <= n - k + 1; i++) {
		int j = i;
		int cnt = 0;
		int m = k;
		while (m--) {
			if (a[j] == true) cnt++;
			j++;
		}
//		cout<<cnt<<endl;
		minn = min(minn, cnt);
	}
	cout<<minn;
}

/*

*/

