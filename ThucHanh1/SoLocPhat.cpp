#include <bits/stdc++.h>
using namespace std;

bool soLocPhat(string s) {
	for (char i : s) {
		if (i != '0' && i != '6' && i != '8') return false;
	}
	return true;
}

int main() {
	int t;
	cin>>t;
	while (t--) {
		string s;
		cin>>s;
		if (soLocPhat(s)) cout<<"YES";
		else cout<<"NO";
		cout<<endl;
	}
}

/*

*/

