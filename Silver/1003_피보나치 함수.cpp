#include<iostream>
using namespace std;

int fibo(int n) {
	if(n == 0 || n == 1) {
		return n;
	}
	return fibo(n-1) + fibo(n-2);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int t, n;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n;
		if (n == 0) {
			cout << "1 0" << "\n";
			continue;
		}
		cout  << fibo(n - 1) << ' ' << fibo(n) << "\n";
	}
}