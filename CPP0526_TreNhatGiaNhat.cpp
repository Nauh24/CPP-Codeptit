#include <bits/stdc++.h>
using namespace std;

struct Person {
	string name, bd;
};

void nhap(Person &a) {
	cin >> a.name >> a.bd;
}

bool cmp(Person a, Person b) {
	string bd1 = a.bd.substr(6, 4) + a.bd.substr(3, 2) + a.bd.substr(0, 2);
	string bd2 = b.bd.substr(6, 4) + b.bd.substr(3, 2) + b.bd.substr(0, 2);
	return bd1 > bd2;
}

int main() {
	int n;
	cin >>n;
	vector<Person> a(n);
	for (int i = 0; i < n; i++) {
		nhap(a[i]);
	}	
	
	sort(a.begin(), a.end(), cmp);
	cout << a[0].name << endl;
	cout << a[a.size() - 1].name;
}

/*
5
Nam 01/10/1991
An 30/12/1990
Binh 15/08/1993
Tam 18/09/1990
Truong 20/09/1990
*/

