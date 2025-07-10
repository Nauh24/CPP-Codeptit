#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		int cnt = 0, x = 0;
		for (int i = 2; i <= sqrt(n); i++) {
			if (n % i == 0) {
				cnt++;
				while(n % i == 0) {
					n/=i;
					x++;
				}
			}
		}
		if (n > 1) {
			cnt++;
			x++;
		}
		if (cnt ==  3 && x == 3) cout<<1;
		else cout<<0;
		cout<<endl;
	}
}

/*

*/

