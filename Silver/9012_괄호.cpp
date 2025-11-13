#include<iostream>
#include<string>
#include<stack>
using namespace std;

int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		string parenthesis;
		stack<char> st;
		bool flag = true;
		cin >> parenthesis;
		for (int j = 0; j < parenthesis.length(); j++) {
			char c = parenthesis[j];

			if (parenthesis[j] == '(') {
				st.push(c);
			}
			else if (parenthesis[j] == ')') {
				if (!st.empty() && st.top() == '(') {
					st.pop();
				}
				else {
					flag = false;
					break;
				}
			}
		}
		if (flag == true && st.empty()) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
}