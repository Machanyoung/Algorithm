#include<iostream>
using namespace std;

int main() {
	int A[3001];
	int B[3001];

	int N;
	int k_A = 0; int k_B = 0;

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}

	for (int i = 0; i < N; i++) {
		cin >> B[i];
	}

	for (int i = 0; i < N-1; i++) {
		if (abs(A[i] - A[i+1]) != 1) {
			k_A += 1;
		}
	}
	for (int i = 0; i < N-1; i++) {
		if (abs(B[i] - B[i+1]) != 1) {
			k_B += 1;
		}
	}

	if (k_A == 0 && k_B == 0) {
		cout << N << endl;
	}else {
		cout << max(k_A, k_B) << endl;
	}
}