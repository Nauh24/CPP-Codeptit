#include <bits/stdc++.h>
using namespace std;

typedef struct SinhVien {
	string msv, ten, lop;
	double d1, d2, d3;
} Sv;

bool cmp (Sv a, Sv b) {
	return a.ten < b.ten;
}

int main() {
	int n;
	cin >> n;
	struct SinhVien a[n];
	for (int i = 0; i < n; i++) {
		cin.ignore();
		getline(cin, a[i].msv);
		getline(cin, a[i].ten);
		getline(cin, a[i].lop);
		cin >> a[i].d1 >> a[i].d2 >> a[i].d3;
	}
	
	sort(a, a + n, cmp);
	for (int i = 0; i < n; i++) {
		cout << i + 1 << " " << a[i].msv << " " << a[i].ten << " " << a[i].lop << " ";
		cout << fixed << setprecision(1) << a[i].d1 << " ";
		cout << fixed << setprecision(1) << a[i].d2 << " ";
		cout << fixed << setprecision(1) << a[i].d3;
		cout << endl;
	} 
	
}

/*
3
B20DCCN999
Nguyen Van Nam
D20CQCN04-B
10.0
9.0
8.0
B20DCAT001
Le Van An
D20CQAT02-B
6.0
6.0
4.0
B20DCCN111
Nguyen Van Binh
D20CQCN01-B
9.0
5.0
6.0
*/

