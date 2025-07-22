#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct PhanSo {
	ll tu, mau;
};

void rutGon(PhanSo &p) {
	ll tmp = __gcd(p.tu, p.mau);
	p.tu /= tmp;
	p.mau /= tmp;
}

PhanSo Plus(PhanSo a, PhanSo b) {
	PhanSo res;
	res.tu = a.tu * b.mau + b.tu * a.mau;
	res.mau = a.mau * b.mau;
	rutGon(res);
	return res;
}

PhanSo Multi(PhanSo a, PhanSo b) {
	PhanSo res;
	res.tu = a.tu * b.tu;
	res.mau = a.mau * b.mau;
	rutGon(res);
	return res;
}

void process(PhanSo A, PhanSo B) {
	PhanSo C = Plus(A, B);
	C = Multi(C, C);
	cout << C.tu << "/" << C.mau << " ";
	PhanSo D = Multi(A, B);
	D = Multi(D, C);
	cout << D.tu << "/" << D.mau;
	cout<<endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}

/*

*/

