#include <bits/stdc++.h>
using namespace std;

class SinhVien {
	friend istream& operator >> (istream& in, SinhVien &a);
	friend ostream& operator << (ostream& out, SinhVien a);
private:
	string ma, ten, lop, email;
public:
	string getLop() {
		return lop;
	}
	
	string getMa() {
		return ma;
	}
};

istream& operator >> (istream& in, SinhVien &a) {
//	in >> ws;
	in >> a.ma;
	in.ignore();
	getline(in, a.ten);
	in >> a.lop >> a.email;
	return in;
}

bool cmp(SinhVien a, SinhVien b) {
	if (a.getLop() != b.getLop()) return a.getLop() < b.getLop();
	else return a.getMa() < b.getMa();
}

ostream& operator << (ostream& out, SinhVien a) {
	out << a.ma << " " << a.ten << " " << a.lop << " " << a.email;
	return out;
}

int main() {
	int n;
	cin >> n;
	SinhVien a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a + n, cmp);
	for (int i = 0; i < n; i++) {
		cout << a[i] << endl;
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
D15CQKT03-B
sv4@stu.ptit.edu.vn
*/

