#include <bits/stdc++.h>
using namespace std;

char mapToDigit(char c) {
	c = toupper(c);
	if (c >= 'A' && c <= 'C') return '2';
	if (c >= 'D' && c <= 'F') return '3';
	if (c >= 'G' && c <= 'I') return '4';
	if (c >= 'J' && c <= 'L') return '5';
	if (c >= 'M' && c <= 'O') return '6';
	if (c >= 'P' && c <= 'S') return '7';
	if (c >= 'T' && c <= 'V') return '8';
	if (c >= 'W' && c <= 'Z') return '9';
	return 0;
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		string s;
		cin>>s;
		string res = "";
		for (char i : s) {
			res += mapToDigit(i);
		}
//		cout<<res;
		s = res;
		reverse(res.begin(), res.end());
		if (res == s) cout<<"YES";
		else cout<<"NO";
		cout<<endl;
	}
}

/*

*/

