#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while (t--) {
		string s;
		cin>>s;
		cout<<s[0];
		int cnt = 1;
		for (int i = 1; i < s.size(); i++) {
			if (s[i] != s[i - 1]) {
				cout<<cnt;
				cnt = 1;
				cout<<s[i];
			}
			else {
				cnt++;
			}
		}
		cout<<cnt;
		cout<<endl;
	}
}

/*

*/

