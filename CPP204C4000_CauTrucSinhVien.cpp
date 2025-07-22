#include <bits/stdc++.h>
using namespace std;

struct SinhVien {
	string msv, hoTen, lop, ngaySinh;
	float gpa;
};

void nhapThongTinSV(SinhVien &a) {
	getline(cin, a.hoTen);
	cin >> a.lop;
	cin >> a.ngaySinh;
	cin >> a.gpa;
	a.msv = "N20DCCN001";
	string bd = a.ngaySinh;
	if (bd[1] == '/') bd.insert(0, "0");
	if (bd[4] == '/') bd.insert(3, "0");
	a.ngaySinh = bd;
}

void inThongTinSV(SinhVien a) {
	cout << a.msv << " " << a.hoTen << " " << a.lop << " " << a.ngaySinh << " ";
	cout << fixed << setprecision(2) << a.gpa;
}

int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}

/*
Nguyen Van A
D20CQCN01-N
2/2/2000
2.5
*/

