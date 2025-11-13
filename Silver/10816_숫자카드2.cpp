#include<iostream>
#include<unordered_map>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N, M, n;
	unordered_map<int, int> map;

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> n;
		map[n]++;
	}

	cin >> M;
	for (int i = 0; i < M; i++) {
		cin >> n;
		cout << map[n] << " ";
	}
}