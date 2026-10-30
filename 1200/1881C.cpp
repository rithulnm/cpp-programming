
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve(){
    int n;
    cin >> n;

    vector<vector<int>> v(n, vector<int>(n));

    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        for(int j = 0; j < n; j++){
            v[i][j] = s[j];
        }
    }

    int ans = 0;

    for(int i = 0; i < n/2; i++){
        for(int j = 0; j < n/2; j++){

            int a = v[i][j];
            int b = v[j][n-1-i];
            int c = v[n-1-i][n-1-j];
            int d = v[n-1-j][i];

            int mx = max({a, b, c, d});
            ans += (mx-a) + (mx-b) + (mx-c) + (mx-d);
        }
    }

    cout << ans << '\n';
}

int main(){
    int t;
    cin >> t;

    while(t--){
        solve();
    }

    return 0;
}
