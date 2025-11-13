#include<iostream>
#include<queue>
using namespace std;

int main() {
	int t, n, m, ipt;
	int count;

	cin >> t;
	while (t--) {
		count = 0;
		cin >> n >> m;
		queue<pair<int, int>> q;
		priority_queue<int> pq;
		for (int i = 0; i < n; i++) {
			cin >> ipt;
			q.push({i,ipt});
			pq.push(ipt);
		}
		while (!q.empty()) {
			int idx = q.front().first;
			int value = q.front().second;
			q.pop();
			if (pq.top() == value) {
				pq.pop();
				count++;
				if (idx == m) {
					cout << count << endl;
					break;
				}
			}
			else q.push({idx, value});
		}
	}
}