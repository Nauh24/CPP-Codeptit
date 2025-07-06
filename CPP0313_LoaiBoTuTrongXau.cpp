#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	string word;
	getline(cin,s);
	cin>>word;
	istringstream iss(s);
	string tmp, res = "";
	
	while(iss >> tmp) {
		if (tmp != word) {
			res += tmp + " ";
		}
	}
	cout<<res;
}

/*

*/

