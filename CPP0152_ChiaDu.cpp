#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int a, m;
		cin>>a>>m;
		bool ok = false;
		for (int i = 0; i < m; i++) {
			if ((a * i) % m == 1) {
				cout<<i;
				ok = true;
				break;
			}
		}
		if (!ok) cout<<-1;
		cout<<endl;
	}
}

