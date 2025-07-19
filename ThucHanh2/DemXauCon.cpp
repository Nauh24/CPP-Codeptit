#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		string s;
		int k;
		cin>>s>>k;
		
		int cnt = 0;
		for (int i = 0; i < s.size(); i++) {
			set<char> set;
			for (int j = i; j < s.size(); j++) {
				set.insert(s[j]);
//				cout<<set.size();
				if (k == set.size()) cnt++;
			}
		}
		cout<<cnt;
		cout<<endl;
	}
}

/*

*/

