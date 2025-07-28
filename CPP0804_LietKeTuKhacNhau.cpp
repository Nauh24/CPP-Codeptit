#include <bits/stdc++.h>
using namespace std;

int main() {
	ifstream in ("VANBAN.in");
	string word;
	set<string> set;
	while (in >> word) {
		for (char &c : word) c = tolower(c);
		set.insert(word);
	}
	
	for (string i : set) cout << i << endl;
}

/*

*/

