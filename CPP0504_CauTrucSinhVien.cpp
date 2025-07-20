#include <bits/stdc++.h>
using namespace std;

struct SinhVien {
	string msv, hoTen, lop, ngaySinh;
	float gpa;
};

void nhap(SinhVien &sv) {
	sv.msv = "B20DCCN001";
	getline(cin, sv.hoTen);
	getline(cin, sv.lop);
	getline(cin, sv.ngaySinh);
	cin >> sv.gpa;
	string bd = sv.ngaySinh;
	if (bd[1] == '/') bd.insert(0, "0");
	if (bd[4] == '/') bd.insert(3, "0");
	sv.ngaySinh = bd;
}

void in(SinhVien sv) {
	cout << sv.msv << " " << sv.hoTen << " " << sv.lop << " " << sv.ngaySinh << " ";
	cout << fixed << setprecision(2) << sv.gpa; 
}

int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}

/*
Nguyen Hoa Binh
D20CQCN04-B
2/2/2002
2
*/

