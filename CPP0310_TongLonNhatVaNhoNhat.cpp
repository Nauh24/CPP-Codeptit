#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

string smallest(string &s) {
	for (char &i : s) {
		if (i == '6') i = '5';
	}
	return s;
}

string largest(string &s) {
	for (char &i : s) {
		if (i == '5') i = '6';
	}
	return s;
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		string s1, s2;
		cin>>s1>>s2;
		
		cout<<stoll(smallest(s1)) + stoll(smallest(s2))<<" ";
		cout<<stoll(largest(s1)) + stoll(largest(s2));
		cout<<endl;
	}
}

/*

*/

