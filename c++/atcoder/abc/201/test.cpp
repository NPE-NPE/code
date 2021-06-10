#include <bits/stdc++.h>
using namespace std;

int main(){
	int N; cin >> N;
	vector<string> S(N);
	vector<int> T(N);
	vector<pair<int, string>> p(N);
	for(int i = 0; i < N; i++) {
		cin >> S.at(i) >> T.at(i);
		p.at(i) = make_pair(T.at(i), S.at(i))
	}
	sort(p.begin(), p.end());
	reverse(p.begin(), p.end());
	string s;
	int t;
	tie(t, s) = p.at(1);
	cout << s << endl;
}

