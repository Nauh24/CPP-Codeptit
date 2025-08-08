#include <bits/stdc++.h>
using namespace std;

int main() {
	ifstream in("DATA.in");
	int n, m, x;
	in >> n >> m;
	set<int> set;
	map<int, int> map;
	for (int i = 0; i < n; i++) {
		in >> x;
		map[x]++;
	}
	
	for (int i = 0; i < m; i++) {
		in >> x;
		if (map[x]) set.insert(x);
	}
	
	for (int i : set) cout << i << " ";
}

/*

*/

