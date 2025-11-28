#include<iostream>
using namespace std;

int main() {
	int t;
	int n = 0;
	cin>>t;
	while (t > 5) {
		t -= 5;
		n++;
	}
	cout << n+1 << endl;
	return 0;
}