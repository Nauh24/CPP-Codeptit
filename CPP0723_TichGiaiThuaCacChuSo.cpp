#include <bits/stdc++.h>
using namespace std;

string trans(char c) {
	if (c == '2') return "2";
	if (c == '3') return "3";
	if (c == '4') return "322";
	if (c == '5') return "5";
	if (c == '6') return "53";
	if (c == '7') return "7";
	if (c == '8') return "7222";
	if (c == '9') return "7332";
	return "";
}

int main() {
	int t;
	cin >>t;
	while(t--) {
		int n;
		string a;
		cin >> n >>a;
		string res = "";
		for (char c : a) {
			res += trans(c);
		}
		sort(res.begin(), res.end(), greater<char>());
		cout << res;
		cout<<endl;
	}
}

/*

*/

