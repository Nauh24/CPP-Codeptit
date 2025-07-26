#include <bits/stdc++.h>
using namespace std;

typedef struct Point {
	int x, y, z;	
} P;

void nhap (P &a) {
	cin >> a.x >> a.y >> a.z;
}

P Vector (P a, P b) {
	P ab;
	ab.x = b.x - a.x;
	ab.y = b.y - a.y;
	ab.z = b.z - a.z;
	return ab;
}

int main() {
	int t;
	cin>> t;
	while (t--) {
	 	P A, B, C, D;
	 	nhap(A);
	 	nhap(B);
	 	nhap(C);
	 	nhap(D);
		P AB = Vector(A, B);	
		P AC = Vector(A, C);	
		P AD = Vector(A, D);
		
		P ABAC;
		
		ABAC.x = AB.y * AC.z - AB.z * AC.y;
		ABAC.y = AB.z * AC.x - AB.x * AC.z;
		ABAC.z = AB.x * AC.y - AB.y * AC.x;
		
		int s = ABAC.x * AD.x + ABAC.y * AD.y + ABAC.z * AD.z;
		if (s == 0) cout << "YES";
		else cout << "NO"; 
	
		cout<< endl;
	}
}

/*

*/

