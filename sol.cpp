#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int d[10];
	for(int i = 0; i < 3; ++i) {
		cin >> d[i];
	}
	sort(d, d + 3);
	bool ok = true;
	int sum = 0;
	for(int i = 0; i < 3; ++i) {
		if(d[i] != d[0]) {
			ok = false;
		}
		sum += d[i];
	}
	int sum2 = (d[0] + d[1]) * 2;
	if(ok || sum < sum2) {
		cout << sum;
	}
	else {
		cout << sum2;
	}
	cout << "\n";
	return 0;
}
