#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		string s;
		cin>>s;
		while(s.length() > 1) {
			int sum = 0;
			for(char c: s) sum += (c - '0');
			s = to_string(sum);
		}
		
		cout<<s;
		cout<<endl;
	}
}

