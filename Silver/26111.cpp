#include<iostream>
#include<stack>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	stack<char> st;
	string str;

	int cnt = -1, result = 0;

	cin >> str;

	for (char c : str) {
		if (c == ')') {
			result += cnt;
			st.pop();
			cnt--;
			cout << result;
		}
		else {
			st.push(c);
			cnt++;
			cout << result;
		}
	}

	cout << result << endl;
	return 0;
}