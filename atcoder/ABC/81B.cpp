#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int ans = 0;
    string s;
    cin >> s;
    for (auto c : s){
        if (c == '1'){
            ans++;
        }
    }

    cout << ans << '\n';
} 