#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while (t--) {
		int n;
		cin>>n;
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin>>a[i];
		}
		int k, x;
		cin>>k>>x;
		
		auto pos = lower_bound(a.begin(), a.end(), x) - a.begin();

		vector<int> v;
//		cout<<pos - 1<<endl;
//		cout<<pos + 1<<endl;

		int r = pos;
		
		for (int j = k / 2; j >= 1; j--) {
        	cout << a[pos - j] << " ";
    	}
    	
	    if (a[r] == x) r++;
	    for (int j = 0; j < k / 2; j++) {
	        cout << a[r + j] << " ";
	    }
		
		
		
		
//		sort(v.begin(), v.end());
//		for (auto i : v) cout<<i<<" ";
//		cout<<pos;
		cout<<endl;
	}
}

/*
1
6
1 3 5 7 9 11
2 7
*/

