#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, k, x;
		cin >> n;
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		
		cin >> k >> x;
		
		int pos = lower_bound(a.begin(), a.end(), x) - a.begin();
		int left = pos;
		int right = pos;
		
		for (int i = k / 2; i >= 1; i--) {
			cout << a[left - i] << " ";
		}
		
		if (right < n && a[right] == x) right++;      //dung while thi sai?
		for (int i = 0; i < k / 2; i++) {
			if(right + i < n)	cout << a[right + i] << " ";
		}
		cout << endl;
	}
}

/*

*/

