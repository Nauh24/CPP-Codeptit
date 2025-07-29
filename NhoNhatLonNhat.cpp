#include <bits/stdc++.h>
using namespace std;

int main() {
	int m, s;
	cin >> m >> s;
	if ((m > 1 && s == 0) || s > 9 * m) {
		cout << "-1 -1";
		return 0;
	}
	
	string smallest = "", largest = "";
	int sum = s;
	for (int i = m; i >= 1; i--) {
		if (sum >= 9){
			
		} smallest = "9" + smallest;
		else {
			smallest = char(sum + '0') + smallest;
		}
		sum -= 9;
	}
	
	if (smallest[0] == '0') {
		smallest[0] = '1';
		smallest[1]++;
	}
	
	sum = s;
	for (int i = 1; i <= m; i++) {
		if (sum > 9) largest += "9";
		else largest += char(sum + '0');
		sum -= 9;
	}
	cout << smallest << " " << largest;
}

/*

*/

