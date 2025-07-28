#include <bits/stdc++.h>
using namespace std;

class KhachHang;
class MatHang;

map<string, KhachHang> mKh;
map<string, MatHang> mMh;

typedef class KhachHang {
	friend istream& operator >> (istream& in, KhachHang &a);
	friend ostream& operator << (ostream& out, KhachHang a);
	friend class HoaDon;
private:
	string ma, ten, gioiTinh, ngaySinh, diaChi;
public:
	static int dem;
	string getMa() {
		return ma;
	}
	
	string getTen() {
		return ten;
	}
	
	string getDiaChi() {
		return diaChi;
	}
} Kh;

int Kh::dem = 1;

istream& operator >> (istream& in, KhachHang &a) {
	in >> ws;
	getline(in, a.ten);
	in >> a.gioiTinh >> a.ngaySinh;
	in.ignore();
	getline(in, a.diaChi);
	stringstream ss;
	ss << "KH" << setw(3) << setfill('0') << Kh::dem++;
	a.ma = ss.str();
	mKh[a.ma] = a;
	return in;
}

typedef class MatHang {
	friend istream& operator >> (istream& in, MatHang &a);
	friend ostream& operator << (ostream& out, MatHang a);
	friend class HoaDon;
private: 
	string ma, ten, donVi;
	int giaMua, giaBan;
public:
	static int dem;
	string getMa() {
		return ma;
	}
	
	string getTen() {
		return ten;
	}
	
	string getDonVi() {
		return donVi;
	}
	
	int getGiaMua() {
		return giaMua;
	}
	
	int getGiaBan() {
		return giaBan;
	}
} Mh;

int Mh::dem = 1;

istream& operator >> (istream& in, Mh &a) {
	in >> ws;
	getline(in, a.ten);
	in >> a.donVi >> a.giaMua >> a.giaBan;
	stringstream ss;
	ss << "MH" << setw(3) << setfill('0') << Mh::dem++;
	a.ma = ss.str();
	mMh[a.ma] = a;
	return in;
}



typedef class HoaDon {
	friend istream& operator >> (istream& in, HoaDon &a);
	friend ostream& operator << (ostream& out, HoaDon a);
private: 
	string ma, maKh, maMh;
	int soLuong;
public:
	static int dem;
	
} Hd;

int Hd::dem = 1;

istream& operator >> (istream& in, Hd &a) {
	in >> a.maKh >> a.maMh >> a.soLuong;
	stringstream ss;
	ss << "HD" << setw(3) << setfill('0') << Hd::dem++;
	a.ma = ss.str();
	return in;
}

ostream& operator << (ostream& out, Hd a) {
	out << a.ma << " ";
	Kh kh = mKh[a.maKh];
	out << kh.getTen() << " " << kh.getDiaChi() << " ";
	Mh mh = mMh[a.maMh];
	out << mh.getTen() << " " << mh.getDonVi() << " " << mh.getGiaMua() << " " << mh.getGiaBan() << " " << a.soLuong << " " << a.soLuong * mh.getGiaBan() << endl;
	return out;
}
int main(){
    KhachHang dskh[25];
    MatHang dsmh[45];
    HoaDon dshd[105];
    int N,M,K,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> dskh[i];
    cin >> M;
    for(i=0;i<M;i++) cin >> dsmh[i];
    cin >> K;
    for(i=0;i<K;i++) cin >> dshd[i];
    
    for(i=0;i<K;i++) cout << dshd[i];
    return 0;
}

/*
2
Nguyen Van Nam
Nam
12/12/1997
Mo Lao-Ha Dong-Ha Noi
Tran Van Binh
Nam
11/14/1995
Phung Khoang-Nam Tu Liem-Ha Noi
2
Ao phong tre em
Cai
25000
41000
Ao khoac nam
Cai
240000
515000
3
KH001 MH001 2
KH001 MH002 3
KH002 MH002 4
*/

