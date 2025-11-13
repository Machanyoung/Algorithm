#include<iostream>
#include<stack>
using namespace std;

int main() {
	int n,m;
	string command;
	stack<int> st;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> command;

		if (command == "push") {
			cin >> m;
			st.push(m);
		}
		else if (command == "pop") {
			if (st.empty()) {
				cout << -1 << endl;
			}
			else {
				cout << st.top() << endl;
				st.pop();
			}
		}
		else if (command == "size") {
			cout << st.size() << endl;
		}
		else if (command == "empty") {
			if (st.empty()) {
				cout << 1 << endl;
			}
			else {
				cout << 0 << endl;
			}
		}
		else if (command == "top") {
			if (st.empty()) {
				cout << -1 << endl;
			}
			else {
				cout << st.top() << endl;
			}
		}
	}
}