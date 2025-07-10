#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
	if (n < 2) return false;
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) return false;
	}
	return true;
}

// khong dung chuoi de xu ly -> tle
bool isIncreasing(int n) {
	int x = n % 10;
	n/=10;
	while (n > 0) {
		if (n % 10 >= x) return false;
		x = n % 10;
		n/=10;
	}
	return true;
}

bool isDescreasing(int n) {
	int x = n % 10;
	n/=10;
	while (n > 0) {
		if (n % 10 <= x) return false;
		x = n % 10;
		n/=10;
	}
	return true;
}

bool check(int n) {
	if (isIncreasing(n) || isDescreasing(n)) return true;
	else return false;
}

int main() {
	int t;
	cin>>t;
	while (t --) {
		int n;
		cin>>n;
		int start = pow(10, n - 1);
		int end = pow(10, n) - 1;
		int cnt = 0;
		for (int i = start; i <= end; i++) {
			if (check(i)) {
				if (isPrime(i)) cnt++;
			}
		}
		cout<<cnt;
		cout<<endl;
	}
}

/*

*/

