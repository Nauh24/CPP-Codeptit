#include <bits/stdc++.h>
using namespace std;

long long  gcd(long long a, long long b) {
	if (b==0) return a;
	else return gcd(b, a % b);
}

long long lcm (long long a, long long b) {
	return a*b/gcd(a,b);
}
int main() {
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		long long res = 1;
		for (long long i = 2; i <= n; i++) {
			res = lcm (res, i);
		}
		cout<<res;
		cout<<endl;
	}
}

