#include <bits/stdc++.h>
using namespace std;

class SinhVien {
	friend istream& operator >> (istream& in, SinhVien &a);
	friend ostream& operator << (ostream& out, SinhVien a);
private:
	string ma, ten, lop, email;
public:
	string getMa() {
		return ma;
	}
};

bool cmp (SinhVien a, SinhVien b) {
	return a.getMa() < b.getMa();
}

istream& operator >> (istream& in, SinhVien &a) {
	in >> a.ma;
	in.ignore();
	getline(in, a.ten);
	in >> a.lop >> a.email;
	return in;
}

ostream& operator << (ostream& out, SinhVien a) {
	out << a.ma << " " << a.ten << " " << a.lop << " " << a.email << endl;
	return out;
}

int main() {
	SinhVien sv;
	vector<SinhVien> a;
	while (cin >> sv) {
		a.push_back(sv);
	}
	
	sort(a.begin(), a.end(), cmp);
	for (int i = 0; i <a.size(); i++) {
		cout << a[i];
	}
}

/*
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

