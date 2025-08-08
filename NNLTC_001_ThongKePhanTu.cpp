#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	unordered_map<int, int> map;
	while (cin >> n) {
		map[n]++;
	}
	for (auto i : map) {
		cout << i.first << " " << i.second << endl;
	}
}

/*

*/

