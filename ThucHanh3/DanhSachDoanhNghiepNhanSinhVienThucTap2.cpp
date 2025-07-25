#include <bits/stdc++.h>
using namespace std;

typedef struct DoanhNghiep {
	string ma, ten;
	int sl;
} Dn;

void nhap(Dn &a) {
	cin >> a.ma;
	cin.ignore();
	getline(cin, a.ten);
	cin >> a.sl;
}

void xuat(Dn a) {
	cout << a.ma << " " << a.ten << " " << a.sl;
	cout << endl;
}

bool cmp(Dn a, Dn b) {
	if (a.sl != b.sl) return a.sl > b.sl;
	else return a.ma < b.ma;
}

int main() {
	int n;
	cin >>n;
	Dn d[n];
	for (int i = 0; i < n; i++) {
		nhap(d[i]);
	}
	
	sort(d, d + n, cmp);
	int q;
	cin >> q;
	for (int i = 0; i < q; i++) {
		int a, b;
		cin >> a >> b;
		cout << "DANH SACH DOANH NGHIEP NHAN TU " << a << " DEN " << b << " SINH VIEN:" << endl;
		for (int j = 0; j < n; j++) {
			if (d[j].sl >= a && d[j].sl <= b) {
				xuat(d[j]);
			}
		}  
	}
}

/*
4
VIETTEL
TAP DOAN VIEN THONG QUAN DOI VIETTEL
40
FSOFT
CONG TY TNHH PHAN MEM FPT - FPT SOFTWARE
300
VNPT
TAP DOAN BUU CHINH VIEN THONG VIET NAM
200
SUN
SUN*
50
1
30 50
*/

