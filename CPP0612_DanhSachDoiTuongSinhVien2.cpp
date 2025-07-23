#include <bits/stdc++.h>
using namespace std;

typedef class SinhVien {
friend istream& operator >> (istream& in, SinhVien &a);
friend ostream& operator << (ostream& out, SinhVien a);
private: 
	string msv, ten, lop, bd;
	float gpa;
public:
	static int dem;
	string chuanHoaTen(string s);
	string chuanHoaNgay(string s);
} Sv;

int Sv::dem = 1;

string Sv::chuanHoaTen(string s) {
	stringstream ss(s);
	string word;
	string res = "";
	while (ss >> word) {
		res += toupper(word[0]);
		for (int i = 1; i < word.size(); i++) res += tolower(word[i]);
		res += " ";
	}
	res.pop_back();
	return res;
}

string Sv::chuanHoaNgay(string s) {
	if(s[1] == '/') s = "0" + s;
	if(s[4] == '/') s.insert(3, "0");
	return s;
}

istream& operator >> (istream& in, SinhVien &a) {
	in.ignore();
	getline(in, a.ten);
	in >> a.lop >> a.bd >> a.gpa;
	stringstream ss;
	ss << "B20DCCN" << setw(3) << setfill('0') << Sv::dem++;
	a.msv = ss.str();
	a.ten = a.chuanHoaTen(a.ten);
	a.bd = a.chuanHoaNgay(a.bd);
	return in;
}

ostream& operator << (ostream& out, SinhVien a) {
	out << a.msv << " " << a.ten << " " << a.lop << " " << a.bd << " ";
	out << fixed << setprecision(2) << a.gpa;
	out << endl;
	return out;
}

int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}

/*
1
nGuyEn  vaN    biNH
D20CQCN01-B
2/12/2002
3.1
*/

