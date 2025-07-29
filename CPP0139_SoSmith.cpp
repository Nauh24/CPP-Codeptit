#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
	if (n < 2) return false;
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) return false;
	}
	return true;
}

int tongChuSo(int n) {
	int sum = 0;
	while (n != 0) {
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

bool isSmith(int n) {
	if (isPrime(n)) return false;
	int sum = 0;
	int m = n;
	for (int i = 2; i <= m / 2; i++) {
		while(n % i == 0) {
			if (isPrime(i)) sum += tongChuSo(i);
			n /= i;
		}
	}
//	cout << sum << " " << tongChuSo(m) << endl;
	return sum == tongChuSo(m);
}

int main() {
	int t;
	cin >>t;
	while (t--) {
		int n;
		cin >> n;
		if (isSmith(n)) cout << "YES";
		else cout << "NO";
		cout << endl;
	}
}

/*

*/

