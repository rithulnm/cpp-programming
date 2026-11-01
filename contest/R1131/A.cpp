#include <bits/stdc++.h>
using namespace std;

void solve(){

    int n, m;
    string p, q;
    cin >> n >> m >> p >> q;

    vector<int> alpha(26, 0);

    for(int i = 0; i < n; i++){
        alpha[p[i] - 'a']++;
    }

    for(int i = 0; i < m; i++){
        alpha[q[i] - 'a']--;
    }

    string target = "six";
    vector<int> f(26, 0);

    for(char c : target){
        f[c - 'a']++;
    }

    for(int i = 0; i < 26; i++){
        if(alpha[i] != f[i]){
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        solve();
    }

    return 0;
}