#include <bits/stdc++.h>
using namespace std;
typedef long long ll;



ll lcm(ll a, ll b) {
	return a * b / __gcd(a,b);
}

int main() {
	int t;
	cin>>t;
	while (t--) {
		ll a, b;
		cin>>a>>b;
		ll gcd = __gcd(a, b);
		cout<<lcm(a, b)<<" "<<gcd;
		cout<<endl;
	}
}

/*

*/

