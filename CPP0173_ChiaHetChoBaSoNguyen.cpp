#include <bits/stdc++.h>
using namespace std;

int lcm(int a, int b) {
	return a * b / __gcd(a,b);
}
int main() {
	int t;
	cin>>t;
	while (t--) {
		int x, y, z, n;
		cin>>x>>y>>z>>n;
		bool ok = false;
		int start = pow(10, n - 1), end = pow(10, n) - 1;
		for (int i = start; i <= end; i++) {
			if (i % lcm(x, lcm(y, z)) == 0) {
				cout<<i;
				ok = true;
				break;
			}
		}
		if(!ok) cout<<-1;
		cout<<endl;
	}
}

/*

*/

