#include <bits/stdc++.h>
using namespace std;

bool check(string s) {
	int even = 0, odd = 0;
	for (int i = 0; i < s.size(); i++) {
		int d = s[i] - '0';
		if (i % 2 == 0) even += d;
		else odd += d;
	}
	return abs(even - odd) % 11 == 0;
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		string s;
		cin>>s;
		cout<< check(s) ? 1 : 0;
		cout<<endl;
	}
}

/*

*/

