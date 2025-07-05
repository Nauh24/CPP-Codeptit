#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		string s;
		cin>>s;
		if (s.length() >=2 && s.substr(s.length() - 2) ==  "86") cout<<"1";
		else cout<<"0";
		cout<<endl;
	}
}

