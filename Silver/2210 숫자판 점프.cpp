#include <iostream>
#include <set>
using namespace std;

int arr[5][5];
set<int>ss;

int dx[4] = { 1, -1, 0, 0 };
int dy[4] = { 0, 0, 1, -1 };

void dfs(int x, int y, int count, int num) {
	if (count == 5) {
		ss.insert(num);
		return;
	}

	for (int i = 0; i < 4; i++) {
		int px = x + dx[i];
		int py = y + dy[i];

		if (px < 0 || py < 0 || px>=5 || py>=5 ) continue;
		dfs(px, py, count + 1, num * 10 + arr[px][py]);
	}
}

int main() {
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++)
			cin >> arr[i][j];

	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++)
			dfs(j,i,0,arr[j][i]);

	cout << ss.size() << '\n';
}