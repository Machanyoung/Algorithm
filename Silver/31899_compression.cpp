#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio();
	cin.tie();
	string s;
	cin >> s;
	string st;
	st.reserve(s.size());
	for(char c: s){
		st.push_back(c);
		int n = (int)st.size();
		if(n >= 2 && st[n-1] == st[n-2]){
			st.pop_back();
		} else if(n >= 4 && st[n-4] == st[n-2] && st[n-3] == st[n-1]){
			st.pop_back(); st.pop_back();
		}
	}
	cout << st << endl;
	return 0;
}