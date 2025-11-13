#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m;
	cin >> n;
	int A[n];
	for (int i = 0; i < n; i++) {
		cin >> A[i];
	}
	sort(A, A + n);

	cin >> m;
	for (int i = 0; i < m; i++) {
		int tmp;
		cin >> tmp;
		if (binary_search(A, A + n, tmp)) {
			cout << 1 << ' ';
		}
		else {
			cout << 0 << ' ';
		}
	}
}