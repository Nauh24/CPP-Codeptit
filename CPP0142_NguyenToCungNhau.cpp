#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
	if (n < 2) return false;
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) return false;
	}
	return true;
}

int main() {
	int t;
	cin>>t;
	while (t--) {
		int x; 
		cin>>x;
		int cnt = 0;
		for (int i = 1; i <= x; i++) {
			if (__gcd(i, x) ==  1) cnt++;
		}
		if (isPrime(cnt)) cout<<1;
		else cout<<0;
		cout<<endl;
	}
}

/*

*/

