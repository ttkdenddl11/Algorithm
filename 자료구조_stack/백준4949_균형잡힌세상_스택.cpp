#include<bits/stdc++.h>
#define fastio cin.tie(0) -> sync_with_stdio(0)
using namespace std;

int main() {
	fastio;
	while (true) {
		string s;	// s : 반복 입력 문자열변수
		stack<char> stk;	// stk : 비어져 있으면 균형잡힌 스택
		getline(cin, s);
		if (s == ".")
			break;
		for (int i = 0; i < s.size(); i++) {	
			if (s[i] == '(' || s[i] == '[')	// 여는 괄호이면 스택에 채워줌
				stk.push(s[i]);
			else if (s[i] == ')') {
				if (!stk.empty() && stk.top() == '(')	// 스택이 비어있으면 탑을 확인할 수 없음
					stk.pop();
				else
					stk.push(')');
			}
			else if (s[i] == ']') {
				if (!stk.empty() && stk.top() == '[')
					stk.pop();
				else
					stk.push(']');
			}
		}
		cout << (stk.empty() ? "yes" : "no");
	}
	return 0;
}