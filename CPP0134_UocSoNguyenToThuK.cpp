#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n, k;
		cin>>n>>k;
		int cnt = 0;
		bool ok = false;
		for (int i = 2; i <= sqrt(n); i++) {
			while (n % i == 0) {
				n/=i;
				cnt++;
				if (cnt == k) {
					cout<<i;
					ok = true;
					break;
				}
			}
			if (ok) break;
		}
		if (n > 1) {
			cnt++;
			if (cnt == k) {
				cout<<n;
				ok = true;	
			}
		}
		if (!ok) cout<<-1;
		cout<<endl;
	}
}

