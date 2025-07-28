#include <bits/stdc++.h>
using namespace std;

int main() {
	ifstream in("DATA.in");
	map<int, int> map;
	string line;
	while (getline(in, line)) {
//		if (line == "0") break;
		stringstream ss(line);
		string word;
		while (ss >> word) {
			int x = stoi(word);
			map[x]++;
		}
	}
	
	for (auto i : map) {
		cout << i.first << " " << i.second << endl;
	}
}

/*

*/

