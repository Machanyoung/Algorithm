#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n ,m;
	string web, password;
	unordered_map<string,string> pw;

	cin>>n>>m;
	for (int i=0;i<n;i++) {
		cin >> web >> password;
		pw.insert(pair<string,string>(web, password));
	}
	for (int i=0;i<m;i++) {
		cin >> web;
		cout << pw[web] << "\n";
	}
	return 0;
}