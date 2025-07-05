#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		string s;
		int k;
		cin>>s>>k;
		set<char> set;
		for (char i : s) {
			set.insert(i);
		}
		if (26 - set.size() <= k) cout<<1;
		else cout<<0;
		cout<<endl;
	}
}

/*

*/

