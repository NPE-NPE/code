#include <bits/stdc++.h>
using namespace std;

int main(){
	int N; int M; int cin >> N >> M;	
	int count = N;
	vector<int> A(M);
	vector<int> B(M);
	for (int i = 0; i < M; i++) cin >> A.at(i);
	for (int i = 0; i < M; i++) cin >> B.at(i);
	for (int i = 0; i < M; i++) {
	       if (i == 0 && A.at(i)+1 == B.at(i) || A.at(i)-1 == B.at(i)) {
		       count++;
		       mem = B.at(i);
	       }
	       if (i > 0 && A.at(i))

	}
	cout << sum << endl;
}


