#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		string s;
		cin>>s;
		int n = s.length();
		map<char, int> map;
		for (char i : s) {
			map[i]++;
		}
		bool ok = true;
		for (auto i : map) {
			if ((i.second > n / 2 && n % 2 == 0) || (i.second > n / 2 + 1 && n % 2 != 0)) {
				ok = false;
				break;
			}
		}
		
		if (!ok) cout<<0;
		else cout<<1;
		cout<<endl;
	}
}

/*

*/

