#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n; 
		cin >> n;
		int a[n];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		sort(a, a + n);
		int idx = 0;
		for (int i = 0; i < n; i++) {
			if (i % 2 == 0) {
				cout << a[n - idx - 1] << " ";
			}
			else {
				cout << a[idx] << " ";
				idx++;
			}
			
		}
		cout<<endl;
	}
}

/*

*/

