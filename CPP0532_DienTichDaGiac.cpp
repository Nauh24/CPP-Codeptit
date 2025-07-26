#include <bits/stdc++.h>
using namespace std;

struct Point {
	int x, y;
};

double area(Point a, Point b) {
	return (a.x * b.y - b.x * a.y);
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		Point a[n + 1];
		for (int i = 0; i < n; i++) {
			cin >>a[i].x >> a[i].y;
		}
		
		a[n] = a[0];
		
		double res = 0;
		for (int i = 0; i < n; i++) {
			res += area(a[i], a[i + 1]);
		}
		res = abs(res) * 0.5;
		cout << fixed << setprecision(3) << res;
		cout<<endl;
	}
}

/*

*/

