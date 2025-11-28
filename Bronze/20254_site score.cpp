#include<iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int ur, tr, uo,to;
	cin>>ur>>tr>>uo>>to;
	cout << ur * 56 + tr * 24 + uo * 14 + to * 6;
	return 0;
}