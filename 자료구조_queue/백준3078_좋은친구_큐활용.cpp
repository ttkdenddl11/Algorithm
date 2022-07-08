#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main() {
	fastio;
	int N, K;
	cin >> N >> K;
	queue<int> que[21];
	long long ans = 0;

	for (int i = 0; i < N; i++) {
		string s;
		cin >> s;
		int len = s.size();

		while (que[len].size() && i - que[len].front() > K) 
			que[len].pop();
		ans += que[len].size();	// 슬라이딩 윈도우
		que[len].push(i);
	}
	cout << ans;

	return 0;
}
