#include <bits/stdc++.h>
using namespace std;

bool cmp(string a, string b) {
	if (a.size() != b.size()) return a.size() > b.size();
	else return a > b;
}

int main() {
	string s;
	map<string, int> map;
	vector<string> v;
	while(getline(cin, s)) {
//		if (s == "0") break;
		stringstream ss(s);
		string word;
		while (ss >> word) {
			string tmp = word;
			reverse(tmp.begin(), tmp.end());
			if (word == tmp && map[word] == 0 && word.size() > 1) v.push_back(word);
			map[word]++;
		}
	}
	
	sort(v.begin(), v.end(), cmp);
	for (auto i : v) {
		cout << i << " " << map[i] << endl;
	}
}

/*
12321 456 12321 34 56 9999999999999999999
12 3 43 34 54 34 54 34 54 657
5 45 554 12321 12321
65 76 45 45 34 53
546 565 65645 6 65 65 35 65
565 565
*/

