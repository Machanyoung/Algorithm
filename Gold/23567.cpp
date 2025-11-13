#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

int n, k;
vector<int> point;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	cin >> n >> k;

	for (int i = 0; i < n; i++) {
		int input;
		cin >> input;
		point.push_back(input);
	}

	map<int, int> check1; //현재 확인하는 범위 (P')
	map<int, int> check2; //전체범위 중 현재 확인하는 범위를 제외한 범위
	int left = 0;
	int right = 0;
	int result = 987654321;

	for (int i = 0; i < n; i++) {
		if (check2.count(point[i]) == 0) {
			check2.insert(make_pair(point[i], 1));
		}
		else {
			check2[point[i]]++;
		}
	}

	while (1) {

		if (check1.size() < k) {

			if (right >= n) {
				break;
			}

			if (check1.count(point[right]) == 0) {
				check1.insert(make_pair(point[right], 1));
			}
			else {
				check1[point[right]]++;
			}

			check2[point[right]]--;
			if (check2[point[right]] == 0) {
				check2.erase(point[right]);
			}

			right++;
		}

		else {

			//현재 범위를 제외한 나머지 구역도, 모든 색을 포함하고 있는지 확인
			if (check2.size() == k) {
				result = min(result, right - left);
			}

			check1[point[left]]--;
			if (check1[point[left]] == 0) {
				check1.erase(point[left]);
			}

			if (check2.count(point[left]) == 0) {
				check2.insert(make_pair(point[left], 1));
			}
			else {
				check2[point[left]]++;
			}

			left++;
		}
	}

	if (result == 987654321) {
		result = 0;
	}

	cout << result;

	return 0;
}