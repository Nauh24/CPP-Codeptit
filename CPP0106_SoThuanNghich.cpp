#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s) {
	string rev = s;
	reverse(rev.begin(), rev.end());
	return s == rev;	
}

int main() {
	int t;
	cin>>t;
	while(t --) {
		string s;
		cin>>s;
		if (isPalindrome(s)) cout<<"YES";
		else cout<<"NO";
		cout<<endl;
	}
}

