#include <bits/stdc++.h>
#define fastio cin.tie(NULL) -> sync_with_stdio(false)
using namespace std;

int main() {
	fastio;
	stack<int> S;											// ���� ������
	
	for (int i = 1; i <= 5; i++) S.push(i);					// S ���ÿ� Ǫ��

	while (!S.empty()) {
		cout << S.size() << ' ' << S.top() << '\n';			// S ������ ũ��� ž�� �ִ� �� ���
		S.pop();											// S ž�� �ִ� �� ����
	}

	return 0;
}