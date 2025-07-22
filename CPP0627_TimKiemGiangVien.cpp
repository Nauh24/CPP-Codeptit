#include <bits/stdc++.h>
using namespace std;

class GiangVien {
private:
    string mgv;
    string name;
    string khoa;
public:
    static int id;

    GiangVien() {
        mgv = name = khoa = "";
    }

    friend istream &operator >> (istream &in, GiangVien &gv);
    friend ostream &operator << (ostream &out, GiangVien &gv);

    string getName() {
        return name;
    }

    string getMaGV()  {
        return mgv;
    }

    string getKhoa() {
        return khoa;
    }
};

int GiangVien::id = 0;

// H�m chu?n h�a t�n khoa th�nh ch? c�i d?u vi?t hoa
string chuanHoaKhoa(string &s) {
    stringstream ss(s);
    string word, res = "";
    while (ss >> word) {
        res += toupper(word[0]);
    }
    return res;
}

// Nh?p gi?ng vi�n
istream &operator >> (istream &in, GiangVien &gv) {
    in.ignore();
    getline(in, gv.name);
    getline(in, gv.khoa);
    gv.khoa = chuanHoaKhoa(gv.khoa);

    GiangVien::id++;
    gv.mgv = "GV";
    if (GiangVien::id < 10) gv.mgv += "0";
    gv.mgv += to_string(GiangVien::id);
    return in;
}

// Xu?t gi?ng vi�n
ostream &operator << (ostream &out, GiangVien &gv) {
    out << gv.mgv << " " << gv.name << " " << gv.khoa << endl;
    return out;
}

// �ua chu?i v? ch? thu?ng
string toLower(string s) {
    for (char &c : s)
        c = tolower(c);
    return s;
}

// T�m v� in danh s�ch gi?ng vi�n ch?a t? kh�a
void timKiem(GiangVien ds[], int n, string tuKhoa) {
    tuKhoa = toLower(tuKhoa);
    for (int i = 0; i < n; ++i) {
        string ten = toLower(ds[i].getName());
        if (ten.find(tuKhoa) != string::npos) {
            cout << ds[i];
        }
    }
}

// H�m main
int main() {
    int n;
    cin >> n;
    GiangVien ds[100];

    for (int i = 0; i < n; ++i)
        cin >> ds[i];

    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        string tuKhoa;
        getline(cin, tuKhoa);
        cout << "DANH SACH GIANG VIEN THEO TU KHOA " << tuKhoa << ":" << endl;
        timKiem(ds, n, tuKhoa);
    }

    return 0;
}

/*
3
Nguyen Manh Son
Cong nghe phan mem
Vu Hoai Nam
Khoa hoc may tinh
Dang Minh Tuan
An toan thong tin
1
aN
*/

