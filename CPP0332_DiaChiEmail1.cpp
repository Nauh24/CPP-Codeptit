#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	getline(cin, s);
	istringstream iss(s);
	string word;
	vector<string> res;
	while(iss >> word) {
		for (char &c : word) c = tolower(c);
		res.push_back(word);
	}
	string email = res.back();
	for (int i = 0; i < res.size() - 1; i++) {
		email += res[i][0];
	}
	email += "@ptit.edu.vn";
	cout<<email;
}

/*

*/

