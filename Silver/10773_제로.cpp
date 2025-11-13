#include<iostream>
#include<stack>
using namespace std;

int main() {
	int k, n;
	stack<int> st;
	cin>>k;
	for(int i=0;i<k;i++) {
		cin>>n;
		if (n != 0) {
			st.push(n);
		}
		else {
			st.pop();
		}
	}
	int result = 0;
	while(!st.empty()) {
		result+=st.top();
		st.pop();
	}
	cout<<result;
}