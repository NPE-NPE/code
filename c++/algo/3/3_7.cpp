#include <bits/stdc++.h>
using namespace std;

int main () {
  string S;
  cin >> S;
  
  int sum = 0;
  for(int bit = 0; bit < (1 << N); bit++){
    int sum = 0;
    for(int i = 0; i < S.size(); i++){
      sum += S[i];
    }
  }
  cout << sum << endl;
}