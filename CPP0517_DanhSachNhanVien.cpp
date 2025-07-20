#include <bits/stdc++.h>
using namespace std;

struct NhanVien {
	string maNV, hoTen, gioiTinh, ngaySinh, diaChi, maSoThue, ngayKy;
};

void nhap(NhanVien &a) {
	cin.ignore();
	getline(cin, a.hoTen);
	cin >> a.gioiTinh;
	cin >> a.ngaySinh;
	cin.ignore();
	getline(cin, a.diaChi);
	cin >> a.maSoThue;
	cin >> a.ngayKy;
}

void in(NhanVien a) {
	cout << a.hoTen << " " << a.gioiTinh << " " << a.ngaySinh << " " << a.diaChi << " " << a.maSoThue << " " << a.ngayKy<<endl;
}

void inds (NhanVien a[], int n) {
	for (int i = 0; i < n; i++) {
		cout<<setw(5)<<setfill('0')<<i + 1<<" ";
		in(a[i]);
	}
}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
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

