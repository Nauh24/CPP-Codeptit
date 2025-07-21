#include <bits/stdc++.h>
using namespace std;

struct NhanVien {
private:
	string maNV, hoTen, gioiTinh, ngaySinh, diaChi, maSoThue, ngayKy; 
public:
	friend istream& operator >> (istream &in, NhanVien &a) {
		getline(in, a.hoTen);
		in >> a.gioiTinh;
		in >> a.ngaySinh;
		in.ignore();
		getline(in, a.diaChi);
		in >> a.maSoThue;
		in >> a.ngayKy;
		a.maNV = "00001";
		return in;
	} 
	
	friend ostream& operator >> (ostream &out, NhanVien a) {
		out << a.maNV << " " << a.hoTen << " " << a.gioiTinh << " " << a.ngaySinh << " " << a.diaChi << " " << a.maSoThue << " " << a.ngayKy;
		return out;
	}
};

int main(){
    NhanVien a;
    cin >> a;
    cout >> a;
    return 0;
}

/*
Nguyen Van Hoa
Nam
11/22/1982
Mo Lao-Ha Dong-Ha Noi
8333123456
31/12/2013
*/

