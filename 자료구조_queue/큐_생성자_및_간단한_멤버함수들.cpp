#include<bits/stdc++.h>
#define fastio cin.tie(0) -> sync_with_stdio(0)
using namespace std;

int main() {
	fastio;
	queue<int> que;	// 큐 생성자
	for (int i = 1; i <= 5; i++) que.push(i);	// Q = [1(front), 2, 3, 4, 5(back)]
	while (!que.empty()) {
		cout << que.size() << ' ' << que.front() << '\n';
		que.pop();
	}
	return 0;
}