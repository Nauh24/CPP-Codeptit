#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main() {
	int t;
	cin>>t;
	while (t--) {
		ll a,x,y;
		cin>>a>>x>>y;
		ll g = __gcd(x,y);
		for (ll i = 0; i < g; i++) {
			cout<<a;
		}
		cout<<endl;
	}
}

/*

*/

