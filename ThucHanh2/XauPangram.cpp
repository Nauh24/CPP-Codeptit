#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while (t--) {
		string s;
		cin>>s;
		int k;
		cin>>k;
		set<char> set;
		for (char i : s) set.insert(i);
		if (k >= 26 - set.size()) cout<<1;
		else cout<<0;
		cout<<endl;
	}
}

/*

*/

