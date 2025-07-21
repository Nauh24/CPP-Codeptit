#include <bits/stdc++.h>
using namespace std;
#define PI 3.141592653589793238

double distance(double x1, double y1, double x2, double y2) {
	return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		double x1, y1, x2, y2, x3, y3;
		cin>>x1>>y1>>x2>>y2>>x3>>y3;
		double a = distance(x1, y1, x2, y2);
		double b = distance(x1, y1, x3, y3);
		double c = distance(x2, y2, x3, y3);
		
		if (a + b > c && a + c > b && b + c > a) {
			double s = sqrt((a + b + c) * (a + b - c) * (b + c - a) * (c + a - b)) / 4;
			double r = a * b * c / (4 * s);
			cout << fixed << setprecision(3) << PI * r * r;
			
		}
		else cout << "INVALID";
		cout<<endl;
	}
}

/*

*/

