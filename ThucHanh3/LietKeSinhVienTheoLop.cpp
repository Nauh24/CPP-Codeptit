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
4
B16DCCN011
Nguyen Trong Duc Anh
D16CNPM1
sv1@stu.ptit.edu.vn
B15DCCN215
To Ngoc Hieu
D15CNPM3
sv2@stu.ptit.edu.vn
B15DCKT150
Nguyen Ngoc Son
D15CQKT02-B
sv3@stu.ptit.edu.vn
B15DCKT199
Nguyen Trong Tung
D15CQKT02-B
sv4@stu.ptit.edu.vn
1
D15CQKT02-B
*/

