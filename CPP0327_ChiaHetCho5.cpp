#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		string s;
		cin>>s;
		int r = 0;
		for (char c : s) {
			r = (r * 2 + (c - '0')) % 5; 
		}
		
		if (r == 0) cout<<"Yes";
		else cout<<"No";
		cout<<endl;
	}
}

/*

*/

