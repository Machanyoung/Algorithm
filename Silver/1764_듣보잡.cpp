#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n ,m;
	string name;
	vector<string> l;
	vector<string> result;
	cin>>n>>m;
	for (int i=0;i<n;i++) {
		cin>>name;
		l.push_back(name);
	}
	sort(l.begin(),l.end());
	for (int i = 0; i < m; i++) {
		cin>>name;
		if (binary_search(l.begin(),l.end(),name)) {
			result.push_back(name);
		}
	}
	sort(result.begin(),result.end());
	cout << result.size() << "\n";
	for (auto x : result) {
		cout << x << "\n";
	}
	return 0;
}