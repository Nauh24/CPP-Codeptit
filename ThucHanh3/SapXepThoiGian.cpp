#include <bits/stdc++.h>
using namespace std;

struct Time {
	int h, m, s;
};

void nhap(Time &a) {
	cin >> a.h >> a.m >> a.s;
}

bool cmp(Time a, Time b) {
	if (a.h != b.h) return a.h < b.h;
	if (a.m != b.m) return a.m < b.m;
	return a.s < b.s;
}

void xuat(Time a) {
	cout << a.h << " " << a.m << " " << a.s;
	cout <<endl;
}
int main() {
	int n;
	cin >> n;
	Time a[n];
	for (int i = 0; i < n; i++) {
		nhap(a[i]);
	}
	
	sort(a, a + n, cmp);
	
	for (int i = 0; i < n; i++) {
		xuat(a[i]);
	}
}

/*

*/

