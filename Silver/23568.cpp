#include <iostream>
#include <unordered_map>

using namespace std;

unordered_map<int, pair<char, int>> m;

int main(void)
{
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int num, dist;
		char dir;
		cin >> num >> dir >> dist;
		m.insert({ num, {dir, dist} });
	}

	int now;
	cin >> now;

	for (int i = 0; i < n; i++)
	{
		if (m[now].first == 'R')
			now += m[now].second;
		else
			now -= m[now].second;
	}

	cout << now << endl;
	return 0;
}