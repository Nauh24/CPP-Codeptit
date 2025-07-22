#include <bits/stdc++.h>
using namespace std;

class NhanVien {
	friend istream& operator >> (istream& in, NhanVien &a);
	friend ostream& operator << (ostream& out, NhanVien a);
private: 
	string maNV, hoTen, gioiTinh, ngaySinh, diaChi, maSoThue, ngayKy;
public: 
	string getNgaySinh();
	static int dem;
};

int NhanVien::dem = 1;

istream& operator >> (istream& in, NhanVien &a) {
	in.ignore();
	getline(in, a.hoTen);
	in >> a.gioiTinh;
	in >> a.ngaySinh;
	in.ignore();
	getline(in, a.diaChi);
	in >> a.maSoThue;
	in >> a.ngayKy;
	stringstream ss;
	ss << setw(5) << setfill('0') << NhanVien::dem++;
	a.maNV = ss.str();
	return in;
}

ostream& operator << (ostream& out, NhanVien a) {
	out << a.maNV << " ";
	out << a.hoTen << " " << a.gioiTinh << " " << a.ngaySinh << " " << a.diaChi << " " << a.maSoThue << " " << a.ngayKy << endl;
	return out;
}

string NhanVien::getNgaySinh() {
	return ngaySinh.substr(6, 4) + ngaySinh.substr(0, 2) + ngaySinh.substr(3, 2);
}

bool cmp (NhanVien a, NhanVien b) {
	return a.getNgaySinh() < b.getNgaySinh();
}

void sapxep(NhanVien a[], int n) {
	sort(a, a + n, cmp);
}

int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}

/*
3
Nguyen Van A
Nam
10/22/1982
Mo Lao-Ha Dong-Ha Noi
8333012345
31/12/2013
Ly Thi B
Nu
10/15/1988
Mo Lao-Ha Dong-Ha Noi
8333012346
22/08/2011
Hoang Thi C
Nu
04/02/1981
Mo Lao-Ha Dong-Ha Noi
8333012347
22/08/2011
*/

