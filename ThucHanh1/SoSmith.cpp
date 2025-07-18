#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
	if (n < 2) return false;
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) return false;
	}
	return true;
}

int sumDigit(int n) {
	int sum = 0;
	while(n > 0) {
		sum += n % 10;
		n/=10;
	}
	return sum;
}



int main() {
	int t;
	cin>>t;
	while (t--) {
		int n;
		cin>>n;
		
		if (isPrime(n)) {
			cout<<"NO";
		}
		else {
			int sum = 0;
			int sum2 = sumDigit(n);
			for (int i = 2; i <= sqrt(n); i++) {
				while (n % i == 0) {
					sum += sumDigit(i);
					n/=i;
				}
			}
	
			if (n > 1) sum += sumDigit(n);
			if (sum2 == sum) cout<<"YES";
			else cout<<"NO";
		}
		cout<<endl;
	}
}

/*

*/

