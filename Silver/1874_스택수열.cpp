#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	vector<char> result;
	stack<int> st;
	int n;
	int cnt = 1;

	cin >> n;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;

		while (x >= cnt) {
			st.push(cnt);
			cnt++;
			result.push_back('+');
		}

		if (st.top() == x) {
			st.pop();
			result.push_back('-');
		}
		else {
			cout << "NO" << "\n";
			return 0;
		}
	}
	for (int i = 0; i < result.size(); i++) {
		cout << result[i] << "\n";
	}
}