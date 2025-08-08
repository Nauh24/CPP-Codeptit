#include <bits/stdc++.h>
using namespace std;

void chuanHoa(string &s) {
	for (char &c : s) c = tolower(c);
}

int main() {
	ifstream in1("DATA1.in");
	string token1;
	vector<string> a;
	set<string> hop, giao;
	while (in1 >> token1) {
		chuanHoa(token1);
		hop.insert(token1);
		a.push_back(token1);
	}
	
	ifstream in2("DATA2.in");
	string token2;
	while (in2 >> token2) {
		chuanHoa(token2);
		hop.insert(token2);
		if (find(a.begin(), a.end(), token2) != a.end()) giao.insert(token2);
	}
	
	for (string i : hop) cout << i << " ";
	cout << endl;
	for (string i : giao) cout << i << " ";

}

/*

*/

