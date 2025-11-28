#include<iostream>
using namespace std;

int main() {
	int t, n;
	cin >> t;
	int dp[12] = {0, 1, 2, 4, };

	for (int i = 0; i < t; i++) {
		cin >> n;
		for (int j = 4; j < 11; j++) {
			dp[j] = dp[j-3] + dp[j-2] + dp[j-1];
		}
		cout << dp[n] << "\n";
	}
}