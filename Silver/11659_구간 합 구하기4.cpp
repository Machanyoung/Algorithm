#include<iostream>
#include<vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m;
	int a, b;
	cin >> n >> m;
	vector<int> A(n);
	A[0] = 0;
	for (int i = 1; i <= n; i++) {
		int num;
		cin >> num;
		A[i] = A[i - 1] + num;
	}
	for (int i = 0; i < m; i++) {
		cin >> a >> b;
		cout << A[b] - A[a - 1] << "\n";
	}

}