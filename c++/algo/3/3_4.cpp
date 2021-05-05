#include <bits/stdc++.h>
using namespace std;

int main () {
  int N;
  cin >> N;
  vector<int> a(N);
  for(int i = 0; i < N; i++) cin >> a.at(i);
  
  sort(a.begin(), a.end());
  int min_value = a.at(0);
  reverse(a.begin(), a.end());
  int max_value = a.at(0);
  

  cout << max_value - min_value << endl;

  
}
//alternative solution
#include <iostream>
#include <vector>
using namespace std;
const int INF = 20000000;   // 十分大きな値に

int main() {
    // 入力を受け取る
    int N;
    cin >> N;
    vector<int> a(N);
    for (int i = 0; i < N; ++i) cin >> a[i];

    // 線形探索
    int max_value = -INF;//With INF, the maximum value is still INF.
    int min_value = INF;
    for (int i = 0; i < N; ++i) {
        if (a[i] < min_value) min_value = a[i];
        if (a[i] > max_value) max_value = a[i];
    }

    // 結果出力
    cout << max_value - min_value << endl;
} 
