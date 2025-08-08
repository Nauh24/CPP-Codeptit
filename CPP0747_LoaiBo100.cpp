#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	cin.ignore();
	while (t--) {
		string s;
		cin >> s;
		int cnt = 0, pos;
		while ((pos = s.find("100")) != string::npos) {
			s.erase(pos, 3);
			cnt += 3;
		}
		cout<<cnt;
		cout<<endl;
	}
}

/*

*/

