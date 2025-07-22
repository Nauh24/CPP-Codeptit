#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

class PhanSo {
private: 
	ll tu, mau;
public:
	PhanSo() {
		tu = 0;
		mau = 1;
	}
	
	PhanSo(ll tu, ll mau) {
		this->tu = tu;
		this->mau = mau;
	}
	
	PhanSo operator + (PhanSo &p) {
		PhanSo res;
		res.tu = tu * p.mau + p.tu * mau;
		res.mau = mau * p.mau;
		res.rutGon();
		return res;
	}
	
	friend istream& operator >> (istream &in, PhanSo &p) {
		in >> p.tu;
		in >> p.mau;
		return in;
	}
	
	void rutGon() {
		ll tmp = __gcd(tu, mau);
		tu /= tmp;
		mau /= tmp;
	}
	
	friend ostream& operator << (ostream &out, PhanSo p) {
		out << p.tu << "/" << p.mau;
		return out;
	}
};



int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}

/*

*/

