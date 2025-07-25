#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

class PhanSo {
friend istream& operator >> (istream& in, PhanSo &a);
friend ostream& operator << (ostream& out, PhanSo a);
private:
	ll tu, mau;
public:
	PhanSo(int tu, int mau) {
		tu = tu;
		mau = mau;
	}
	void rutgon() {
		ll tmp = __gcd(tu, mau);
		tu/=tmp;
		mau/=tmp;
	}
};

istream& operator >> (istream& in, PhanSo &a) {
	in >> a.tu >> a.mau;
	return in;
}

ostream& operator << (ostream& out, PhanSo a) {
	out << a.tu << "/" << a.mau;
	return out;
}

int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}

/*

*/

