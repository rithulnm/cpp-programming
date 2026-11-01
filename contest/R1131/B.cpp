#include <bits/stdc++.h>
using namespace std;

void solve(){
    int x,y,z;
    cin >> x >> y >> z;

    int m = max(x,max(y,z));

    char c = (m==x) ? 'P' : (m==y) ? 'R' : 'S';
    cout << string(x+y+z, c) << '\n';
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