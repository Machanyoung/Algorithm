#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n, m;
	int A[100001];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> A[i];
	}
	sort(A, A + n);

	cin >> m;
	for (int i = 0; i < m; i++) {
		int tmp;
		cin >> tmp;
		if (binary_search(A, A, tmp)) {
			cout << 1 << endl;
		}
		else {
			cout << 0 << endl;
		}
	}
}