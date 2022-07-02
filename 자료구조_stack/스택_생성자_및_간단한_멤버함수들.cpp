#include <bits/stdc++.h>
#define fastio cin.tie(NULL) -> sync_with_stdio(false)
using namespace std;

int main() {
	fastio;
	stack<int> S;											// 스택 생성자
	
	for (int i = 1; i <= 5; i++) S.push(i);					// S 스택에 푸쉬

	while (!S.empty()) {
		cout << S.size() << ' ' << S.top() << '\n';			// S 스택의 크기와 탑에 있는 수 출력
		S.pop();											// S 탑에 있는 수 삭제
	}

	return 0;
}