#include<iostream>
#include<cmath>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n,m;
	cin >> n >> m;

	int alpha[n][n];
	int beta[n][n];
	int arr[m];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> alpha[j][i];
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> beta[j][i];
		}
	}

	for (int i = 0; i < m; i++) {
		cin >> arr[i];
	}

	int hap = 0;
	for (int i = 0; i < m; i++) {
		int maximum = 0;

		int k = arr[i];


		for (int j = 0; j < n; j++) {
			int cha = alpha[k][j] - beta[k][j];
			if (abs(cha) > maximum) {
				maximum = abs(cha);
			}

		}
		hap += maximum;
	}



	cout << hap << endl;
	return 0;
}