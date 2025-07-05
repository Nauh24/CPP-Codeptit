#include <bits/stdc++.h>
using namespace std;

bool check(string s) {
	for(int i = 0; i < s.size() -1; i++) {
		if (abs(s[i + 1] - s[i]) != 1) return false;
	}	
	return true;
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		string s;
		cin>>s;
		if(check(s)) cout<<"YES";
		else cout<<"NO";
		cout<<endl;
	}
}

