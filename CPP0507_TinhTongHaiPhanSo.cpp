#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct PhanSo {
	ll tu, mau;
};

void nhap(PhanSo &p) {
	cin >> p.tu >> p.mau;
}

void rutGon(PhanSo &p) {
	ll tmp = __gcd(p.tu, p.mau);
	p.tu /= tmp;
	p.mau /= tmp;
}

PhanSo tong(PhanSo a, PhanSo b) {
	PhanSo res;
	res.tu = a.tu * b.mau + b.tu * a.mau;
	res.mau = a.mau * b.mau;
	rutGon(res);
	return res;
}

void in(PhanSo p) {
	cout << p.tu << "/" << p.mau;
}

int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}

/*

*/

