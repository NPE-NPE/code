#include <bits/stdc++.h>
using namespace std;
const int INF = 20000000;

int main () {
  int N, v;
  cin >> N >> v;
  vector<int> a(N);
  for(int i = 0; i < N; i++) cin >> a.at(i);
  
  int count = 0;
  for(int i = 0; i < N; i++) {
    if (a.at(i) == v) {
      count++;
      

    }
  }

  cout << count << endl;

  
}