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
	
	int q;
	cin >> q;
	for (int i = 0; i < q; i++) {
		string s;
		cin >>s;
		cout << "DANH SACH SINH VIEN LOP " << s << ":" << endl;
		for (int i = 0; i < n; i++) {
			if (a[i].getLop() == s) 
				cout << a[i] << endl;
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
D15CQKT03-B
sv4@stu.ptit.edu.vn
*/

