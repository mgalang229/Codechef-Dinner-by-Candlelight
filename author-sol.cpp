#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		long long a, y, x;
		cin >> a >> y >> x;
		// based on observation:
		// case 1:
		// if 'a' (time) is less than 'y', then we only need to multiply the arrival time
		// and number of candles that are lit up every second plus one (1) because there
		// is a pre-lit candle at time 0 and there are no candles that will be extinguished
		// case 2:
		// if 'a' (time) is greater than or equal to 'y', then there will be '(x * (a - y))'
		// candles that will be extinguished from a total of '(a * x)' candles that will be lit up
		// derivation:
		// = (a * x) - (x * (a - y))
		// = (a * x) - ((a * x) - (x * y))
		// = (a * x) - (a * x) + (x * y)
		// = x * y -> maximum candles that are lit up after extinguishing (x * (a - y)) candles
		cout << (a >= y ? x * y : a * x + 1) << '\n';
	}
	return 0;
}
