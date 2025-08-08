#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int check(string s) {
	for (char c: s) {
		if (!isdigit(c)) return 0;
	}
	if (s.length() > 10) return 0;
	else return 1;
}

int main() {
	ifstream in("DATA.in");
	ll sum = 0;
	string token;
	while (in >> token) {
		if (check(token))  sum += stoi(token);
	}
	cout<<sum;
}

/*

*/

