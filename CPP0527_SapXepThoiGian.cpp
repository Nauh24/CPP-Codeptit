#include <bits/stdc++.h>
using namespace std;

struct Time{
	int h, m, s;
};

bool cmp (Time a, Time b) {
	if (a.h == b.h) {
		if (a.m == b.m) {
			return a.s < b.s;
		}
		else return a.m < b.m;
	}
	else return a.h < b.h;
}

int main() {
	int n;
	cin>>n;
	vector<Time> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i].h >> a[i].m >> a[i].s;
	}
	sort(a.begin(), a.end(), cmp);
	for (auto i : a) {
		cout << i.h << " " << i.m << " " << i.s;
		cout<<endl;
	}
}

/*

*/

