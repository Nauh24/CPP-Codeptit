#include <bits/stdc++.h>
using namespace std;

int main() {
	int m, s;
	cin>>m>>s;
	if (s > 9 * m || (s == 0 && m > 1)) {
		cout<<"-1 -1";
		return 0;
	}
	string smallest = "", largest = "";
	int sum = s;
	for (int i = 0; i < m; i++) {
		int digit = min(9, sum);
		largest += char(digit + '0');
		sum -= digit;
	}
	
	sum = s;
	for (int i = 0; i < m; i++) {
		for (int d = (i == 0 ? 1 : 0); d <= 9; d++) {
			if (sum - d <= 9 * (m - i - 1)) {
				smallest += char(d + '0');
				sum -= d;
				break;
			}
		}
	}
	
	cout<<smallest<<" "<<largest;
}

/*

*/

