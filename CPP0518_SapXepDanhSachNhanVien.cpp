#include <bits/stdc++.h>
using namespace std;

struct NhanVien {
	string maNV, hoTen, gioiTinh, ngaySinh, diaChi, maSoThue, ngayKy;
};

int static dem = 1;

void nhap(NhanVien &a) {
	cin.ignore();
	getline(cin, a.hoTen);
	cin >> a.gioiTinh;
	cin >> a.ngaySinh;
	cin.ignore();
	getline(cin, a.diaChi);
	cin >> a.maSoThue;
	cin >> a.ngayKy;
	stringstream ss;
	ss << setw(5) << setfill('0') << dem++;
	a.maNV = ss.str();
}

bool cmp (NhanVien a, NhanVien b) {
	string bda = a.ngaySinh;
	string bdb = b.ngaySinh;
	bda = bda.substr(6, 4) + bda.substr(0, 2) + bda.substr(3, 2); //yyyy/mm/dd
	bdb = bdb.substr(6, 4) + bdb.substr(0, 2) + bdb.substr(3, 2);
	return bda < bdb;
}

void sapxep(NhanVien a[], int n) {
	sort(a, a + n, cmp);
}

void inds(NhanVien a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << a[i].maNV << " " << a[i].hoTen << " " << a[i].gioiTinh << " " << a[i].ngaySinh << " " << a[i].diaChi << " " << a[i].maSoThue << " " << a[i].ngayKy << endl;
	}
}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
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

