#include <iomanip>
#include<iostream>
#include<cmath>
using namespace std;

int main() {
	cin.sync_with_stdio(false);
	cin.tie(0);

	long long p,a,b,c,d,n;

	cin >> p >> a >> b >> c >> d >> n;

	double max_price = 0;
	double max_drop = 0.0;

	for (int k = 0; k < n+1; k++) {
		double x = p * (sin(double(a) * k + b) + cos(double(c) * k + d) + 2.0);
		if (x > max_price) max_price = x;
		else max_drop = max(max_drop, max_price - x);
	}
	cout.setf(std::ios::fixed);
	cout << setprecision(6) << max_drop << endl;
}