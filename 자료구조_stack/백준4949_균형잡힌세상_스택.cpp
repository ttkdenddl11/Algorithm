#include<bits/stdc++.h>
#define fastio cin.tie(0) -> sync_with_stdio(0)
using namespace std;

int main() {
	fastio;
	while (true) {
		string s;	// s : �ݺ� �Է� ���ڿ�����
		stack<char> stk;	// stk : ����� ������ �������� ����
		getline(cin, s);
		if (s == ".")
			break;
		for (int i = 0; i < s.size(); i++) {	
			if (s[i] == '(' || s[i] == '[')	// ���� ��ȣ�̸� ���ÿ� ä����
				stk.push(s[i]);
			else if (s[i] == ')') {
				if (!stk.empty() && stk.top() == '(')	// ������ ��������� ž�� Ȯ���� �� ����
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