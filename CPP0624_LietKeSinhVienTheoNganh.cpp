#include <bits/stdc++.h>
using namespace std;

class SinhVien {
	friend istream& operator >> (istream& in, SinhVien &a);
	friend ostream& operator << (ostream& out, SinhVien a);
private:
	string ma, ten, lop, email;
public:
	string getNganh() {
		string tmp = ma.substr(3, 4);
		if (tmp == "DCKT") return "KE TOAN";
		else if (tmp == "DCCN" && lop[0] != 'E') return "CONG NGHE THONG TIN";
		else if (tmp == "DCAT" && lop[0] != 'E') return "AN TOAN THONG TIN";
		else if (tmp == "DCVT") return "VIEN THONG";
		else if (tmp == "DCDT") return "DIEN TU";
		else return "";
	}
};

istream& operator >> (istream& in, SinhVien &a) {
	in >> a.ma;
	in.ignore();
	getline(in, a.ten);
	in >> a.lop >> a.email;
	return in;
}

ostream& operator << (ostream& out, SinhVien a) {
	out << a.ma << " " << a.ten << " " << a.lop << " " << a.email;
	out << endl;
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
		cin >> ws;
		string nganh;
		getline(cin, nganh);
		for (char &c : nganh) c = toupper(c);
		cout << "DANH SACH SINH VIEN NGANH " << nganh << ":" << endl;
		for (int i = 0; i < n; i++) {
//			cout << a[i].getNganh()<< endl;
			if (nganh == a[i].getNganh()) {
				cout << a[i];
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
Ke toan
*/

