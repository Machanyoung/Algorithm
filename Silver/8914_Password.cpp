#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <array>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int T;
	cin >> T;
	while (T--) {
		int K; cin >> K;
		vector<string> g1(6), g2(6);
		for (int i = 0; i < 6; ++i) cin >> g1[i];
		for (int i = 0; i < 6; ++i) cin >> g2[i];

		vector<vector<char>> col(5);
		bool impossible = false;
		for (int j = 0; j < 5; ++j) {
			bool f1[26] = {0}, f2[26] = {0};
			for (int i = 0; i < 6; ++i) f1[g1[i][j]-'A'] = true;
			for (int i = 0; i < 6; ++i) f2[g2[i][j]-'A'] = true;
			for (int c = 0; c < 26; ++c)
				if (f1[c] && f2[c]) col[j].push_back(char('A'+c));
			if (col[j].empty()) { impossible = true; break; }
		}
		if (impossible) { cout << "NO\n"; continue; }

		array<size_t,5> idx = {0,0,0,0,0};
		long long cnt = 0;
		bool printed = false;

		while (true) {
			string cand;
			cand.reserve(5);
			for (int j = 0; j < 5; ++j) cand.push_back(col[j][idx[j]]);
			if (++cnt == K) { cout << cand << "\n"; printed = true; break; }

			int t = 4;
			while (t >= 0) {
				idx[t]++;
				if (idx[t] < col[t].size()) break;
				idx[t] = 0;
				--t;
			}
			if (t < 0) break;
		}

		if (!printed) cout << "NO\n";
	}
	return 0;
}
