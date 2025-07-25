#include <bits/stdc++.h>
using namespace std;

typedef struct SinhVien {
	string ma, ten, lop, email;
} Sv;

void nhap(Sv &a) {
	cin >> a.ma;
	cin.ignore();
	getline(cin, a.ten);
	cin >> a.lop;
	cin >> a.email;
}

void xuat(Sv a) {
	cout << a.ma << " " << a.ten << " " << a.lop << " " << a.email << endl;
}

int main() {
	int n;
	cin >> n;
	Sv a[n];
	for (int i = 0; i < n; i++) {
		nhap(a[i]);
	}
	
	int q;
	cin >>q;
	for (int i = 0; i < q; i++) {
		string s;
		cin >>s;
		cout << "DANH SACH SINH VIEN LOP " << s << ":" << endl;
		for (int j = 0; j < n; j++) {
			if (a[j].lop == s) {
				xuat(a[j]);
			}
		}
	}
}

/*

*/

