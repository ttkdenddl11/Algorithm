#include<bits/stdc++.h>
#define fastio cin.tie(0) -> sync_with_stdio(0)
using namespace std;

int main() {
	fastio;
	queue<int> que;
	int N;
	cin >> N;
	for (int i = 1; i <= N; i++) {
		que.push(i);
	}
	while (!(que.size() == 1)) {	// que가 한개 남을 때 까지
		que.pop();
		que.push(que.front());
		que.pop();
	}
	cout << que.front();
	return 0;
}