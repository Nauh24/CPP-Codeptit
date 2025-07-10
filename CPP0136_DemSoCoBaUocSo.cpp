#include <bits/stdc++.h>
using namespace std;

bool isPrime(long long n) {
	if (n < 2) return false;
	for (long long i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) return false;
	}
	return true;
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		long long n;
		cin>>n;
		int cnt = 0;
		for (long long i = 2; i <= sqrt(n); i++) {
			if (isPrime(i)) cnt++;
		}
		cout<<cnt;
		cout<<endl;
	}
}

/*

*/

