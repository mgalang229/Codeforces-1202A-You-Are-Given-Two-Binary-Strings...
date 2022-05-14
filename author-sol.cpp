#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		string x;
		cin >> x;
		string y;
		cin >> y;
		int len_x = x.size();
		int len_y = y.size();
		int pos_y = -1;
		for (int i = len_y - 1; i >= 0; i--) {
			if (y[i] == '1') {
				pos_y = i;
				break;
			}
		}
		int cnt = 0;
		for (int i = pos_y + len_x - len_y; i >= 0; i--) {
			if (x[i] != '1') {
				cnt++;
			} else {
				break;
			}
		}
		cout << cnt << '\n';
	}
	return 0;
}
