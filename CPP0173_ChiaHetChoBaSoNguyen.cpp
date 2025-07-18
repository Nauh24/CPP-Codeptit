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
		int x, y, z, n;
		cin>>x>>y>>z>>n;
		ll start = pow(10, n - 1), end = pow(10, n) - 1;
		ll lcm_xyz = lcm(x, lcm(y, z));
		
		ll res = (start + lcm_xyz - 1) / lcm_xyz * lcm_xyz;  
		if (res <= end) {
			cout<<res;
		}  
		else cout<<-1;
		
		cout<<endl;
	}
}

/*

*/

