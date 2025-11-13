#include<iostream>
using namespace std;


int gcd_num (int num1, int num2) {
	int r = num1 % num2;
	while (r != 0){
		num1 = num2;
		num2 = r;
		r = num1 % num2;
	}
	return num2;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int p1[6] ={0,0,0,0,0,0};
	int p2[6]={0,0,0,0,0,0};

	for (int i = 0; i < 6; i++) {
		cin >> p1[i];
	}
	for (int i = 0; i < 6; i++) {
		cin >> p2[i];
	}

	int wcnt = 0;

	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			if (p1[i] > p2[j]) {
				wcnt += 1;
			}
		}
	}

	int gcd = gcd_num(36, wcnt);

	cout << wcnt / gcd << "/" << 36/gcd << endl;

}