#include <bits/stdc++.h>
using namespace std;

bool tangChat(string s) {
	for (int i = 1; i < s.size(); i++) {
		if (s[i] <= s[i-1]) return false;
	}
	return true;
}

bool bangNhau(string s) {
	if ((s[0] == s[1] && s[1] == s[2]) && (s[3] == s[4])) return true;
	else return false;
}

bool locPhat(string s) {
	for (char i : s) {
		if (i != '6' && i != '8') return false;
	}
	return true;
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		string s;
		cin>>s;
		string res = "";
		for (int i = 5; i <= 7; i++) res += s[i];
		for (int i = 9; i <= 10; i++) res += s[i];
//		cout<<res<<endl;
		if (!tangChat(res) && !locPhat(res) && !bangNhau(res)) cout<<"NO";
		else cout<<"YES";
		cout<<endl;
	}
}

/*

*/

