#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main() {
	fastio;
	deque<int> DQ; // DQ = { }
	for (int i = 1; i <= 5; i++) DQ.push_back(i); // DQ = { 1, 2, 3, 4, 5 }
	for (int i = 6; i <= 10; i++) DQ.push_front(i); // DQ = { 10, 9, 8, 7, 6, 1, 2, 3, 4, 5 }
	for (int i = 1; i <= 3; i++) DQ.pop_front(); // DQ = { 7, 6, 1, 2, 3, 4, 5 }
	for (int i = 1; i <= 3; i++) DQ.pop_back(); // DQ = { 7, 6, 1, 2 }

	cout << "DQ.size() : " << DQ.size() << '\n'; // 4
	cout << "DQ.empty() : " << DQ.empty() << '\n' << '\n'; // 0
	DQ.clear(); // DQ = { }
	DQ.resize(1); // DQ = { 0 }
	DQ.resize(3, 2); // DQ = { 0, 2, 2 }
	DQ[1] = 1; // DQ = { 0, 1, 2 }

	for (auto it = DQ.begin(); it != DQ.end(); it++) cout << *it << ' '; cout << '\n'; // 0 1 2
	for (auto it = DQ.rbegin(); it != DQ.rend(); it++) cout << *it << ' '; cout << '\n'; // 2 1 0
	cout << "DQ.front() : " << DQ.front() << '\n'; // 0
	cout << "DQ.end() : " << DQ.back() << '\n'; // 2

	return 0;
}