#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll sumDigit(ll n) {
	ll sum = 0;
	while (n > 0) {
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		string s;
		cin>>s;
		ll sum = 0;
		for (char i : s) sum += (i - '0');
		while(sum >= 10) {
			sum = sumDigit(sum);
		}
		if (sum == 9) cout<<1;
		else cout<<0;
		cout<<endl;
	}
}

/*

*/

