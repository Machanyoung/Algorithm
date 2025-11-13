#include<iostream>
#include<string>
#include<stack>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	while (true) {
		string input;
		getline(cin, input);
		if (input==".") {
			break;
		}

		stack<char> st;
		bool flag = true;

		for (int i=0; i<input.length(); i++) {
			char c = input[i];

			if (c == '(' || c == '[') {
				st.push(c);
			}
			else if (c == ')') {
				if (!st.empty() && st.top() == '(') {
					st.pop();
				}
				else {
					flag = false;
					break;
				}
			}
			else if (c == ']') {
				if (!st.empty() && st.top() == '[') {
					st.pop();
				}
				else {
					flag = false;
					break;
				}
			}
		}
		if (flag == true && st.empty()) {
			cout << "yes" << endl;
		}
		else {
			cout << "no" << endl;
		}
	}
}