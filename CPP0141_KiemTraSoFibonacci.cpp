#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	long long f[93];
	f[0] = 0, f[1] = 1;
	for (long long i = 2; i <= 92; i++) f[i] = f[i-1] + f[i-2];
	while(t--) {
		long long n;
		cin>>n;
		long long i = 0;
		bool ok = false;
		while (f[i] <= n) {
			if (f[i] == n) {
				ok = true;
				break;
			}
			i++;
		}
		if (ok) cout<<"YES";
		else cout<<"NO";
		cout<<endl;
	}
}

/*

*/

