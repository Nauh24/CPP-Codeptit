#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		vector<ll> v;
		int cnt = 0;
		for (int i = 0; i < n; i++) {
			ll x;
			cin>>x;
			if (x != 0) v.push_back(x);
		}
		
		for (int i = 0; i < v.size(); i++) {
			cout<<v[i]<<" ";
		}
		for (int i = 0; i < n - v.size(); i++) {
			cout<<0<<" ";
		}
		cout<<endl;
	}
}

/*

*/

