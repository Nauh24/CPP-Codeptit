#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	getline(cin, s);
	istringstream iss(s);
	string word;
	vector<string> v;
	while(iss >> word) {
		word[0] = toupper(word[0]);
		for (int i = 1; i < word.size(); i++) {
			word[i] = tolower(word[i]);
		}
		v.push_back(word);
	}
	string res = "";
	for (int i = 0; i < v.size() - 1; i++) {
		res += v[i];
		if (i == v.size() - 2) res += ", ";
		else res += " ";	
	}
	for (char &c : v.back()) c = toupper(c);
	res += v.back();
	cout<<res;
}

/*

*/

