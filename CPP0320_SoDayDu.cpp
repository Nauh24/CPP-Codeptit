#include <bits/stdc++.h>
using namespace std;

bool soDayDu(string s) {
	set<char> set;
	for (char i : s) set.insert(i);
	return set.size() == 10;
}

bool hopLe(string s) {
	if (s[0] == '0') {
		return false;
	} 
	
	for (char i : s) {
		if (!isdigit(i)) {
			return false;
		}
	}
	return true;
}
int main() {
	int t;
	cin>>t;
	while(t--) {
		string s;
		cin>>s;
		
		if (!hopLe(s)) cout<<"INVALID";
		else {
			if(soDayDu(s)) cout<<"YES";
			else cout<<"NO";
		}
		
		cout<<endl;
	}
}

/*
3
01234aa32432432432534545b987978
123444444444444566666666667890
324562783924723543243243242354354354333234324
*/

