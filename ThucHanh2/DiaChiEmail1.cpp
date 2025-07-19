#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	getline(cin, s);
	stringstream ss(s);
	string word;
	string res = "";
	vector<string> v;
	while (ss >> word) {
		for (char &i : word) i = tolower(i);
		v.push_back(word);
	}
	res += v.back();
	for (int i = 0; i < v.size() - 1; i++) {
		res += v[i][0];
	}
	res += "@ptit.edu.vn";
	cout<<res;
}

/*

*/

