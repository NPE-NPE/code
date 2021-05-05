nclude <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int>A(N);

    for (int i = 0; i < N; i++)cin >> A.at(i);

    int count = 0;
    bool ans = true
    while(ans == false){
        for (int i = 0; i < N; i++) {
            if (A.at(i) % 2 != 0) ans = false;
            A.at(i) /= 2;
            count++;
        }
    }
    cout << count << endl;
}
