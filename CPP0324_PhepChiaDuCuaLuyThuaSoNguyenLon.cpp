#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll chiaDu(string s, ll m) {
	ll res = 0;
	for (char i : s) {
		res = (res * 10 + (i - '0')) % m;
	}
	return res;
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		string a;
		cin>>a;
		ll b, m;
		cin>>b>>m;
		ll base = chiaDu(a, m);
		ll res = 1;
		while (b > 0) {
			if (b % 2 == 1) res = (res * base) % m;
			base = (base * base) % m;
			b /= 2;
		}
		cout<<res;
		cout<<endl;
	}
}

/*

*/

