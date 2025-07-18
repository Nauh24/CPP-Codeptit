#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		string a[n];
		set<char> set;
		for (int i = 0; i < n; i++) {
			cin>>a[i];
			for (char c : a[i]) set.insert(c);
		}
		
		for (char c : set) cout<<c<<" ";
		cout<<endl;
	}
}

/*

*/

