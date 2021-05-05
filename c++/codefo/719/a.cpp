#include <bits/stdc++.h>
using namespace std;

int main(){
  int t; cin >> t;
  while(t){
										int n ; cin >> n;
										string s; cin >> s;
										s.erase(unique(s.begin(), s.end()), s.end());
										bool ans = true;
										for(int i = 0; i < s.size(); i++){
																		if(s.at(i) == s.at(i+1)) ans = false;
										}
										if(ans == true) cout << "YES" << endl;
										else cout << "NO" << endl;
		}
}
