#include <bits/stdc++.h>
using namespace std;

bool check(string s) {
	string tmp = s;
	reverse(s.begin(), s.end());
	if (s != tmp) return false;
	for (char i : s) {
		if ((i - '0') % 2 != 0) return false;
	}
	return true;
} 

int main() {
	int t;
	cin>>t;
	while(t--) {
		string s;
		cin>>s;
		if (check(s)) cout<<"YES";
		else cout<<"NO";
		cout<<endl;
	}
}

/*

*/

