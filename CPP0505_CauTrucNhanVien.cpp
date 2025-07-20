#include <bits/stdc++.h>
using namespace std;

struct NhanVien {
	string maNV = "00001";
	string hoTen, gioiTinh, ngaySinh, diaChi, maSoThue, ngayKy;
};

void nhap(NhanVien &a) {
	getline(cin, a.hoTen);
	cin >> a.gioiTinh;
	cin >> a.ngaySinh;
	cin.ignore();
	getline(cin, a.diaChi);
	
	cin >> a.maSoThue;
	cin >> a.ngayKy;
}

void in(NhanVien a) {
	cout << a.maNV << " " << a.hoTen << " " << a.gioiTinh << " " << a.ngaySinh << " " << a.diaChi << " " << a.maSoThue << " " << a.ngayKy;
}

int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}

/*
Nguyen Van Hoa
Nam
22/11/1982
Mo Lao-Ha Dong-Ha Noi
8333123456
31/12/2013
*/

