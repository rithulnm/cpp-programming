#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--){
        int x0,y0,R;
        cin >> x0 >> y0 >> R;

        int x=x0;
        int y=y0 + R;

        cout << x << ' ' << y << '\n';
    }

    return 0;
}