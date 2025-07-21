#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct PhanSo {
private:
	ll tu, mau;
	
public:
	PhanSo(ll tu, ll mau) {
		this->tu = tu;
		this->mau = mau;
	}
	void rutgon() {
		ll tmp = __gcd(tu, mau);
		tu /= tmp;
		mau /= tmp;
	}
	friend istream& operator >> (istream &in, PhanSo &p) {
		in >> p.tu >> p.mau;
		return in;
	}
	
	friend ostream& operator << (ostream &out, PhanSo p) {
		p.rutgon();
		out << p.tu << "/" << p.mau;
		return out;
	}
};

int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}

/*

*/

