#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e6;
int a[MAX + 1];
void sieve() {
	for (int i = 1; i <= MAX; i++) a[i] = i;
	for (int i = 2; i <= sqrt(MAX); i++) {
		if (a[i] == i) {
			for (int j = i * i; j <= MAX; j+=i) {
				if (a[j] == j) {
					a[j] = i;
				} 
			}
		}
	}
}

int main() {
	sieve();
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		for (int i = 1; i <= n; i++) {
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
}

/*

*/

