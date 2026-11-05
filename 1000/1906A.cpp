#include <bits/stdc++.h>
using namespace std;

bool adj(int x, int y){
    return max(abs(x/3 - y/3), abs(x%3 - y%3)) == 1;
}

int main(){
    vector<string> v(3);
    for (int i = 0; i < 3; i++) cin >> v[i];

    string best = "ZZZ";
    for (int a = 0; a < 9; a++)
        for (int b = 0; b < 9; b++)
            for (int c = 0; c < 9; c++){
                if (!(adj(a,b) && adj(b,c) && a != c)) continue;

                string s = "";
                s += v[a/3][a%3];
                s += v[b/3][b%3];
                s += v[c/3][c%3];

                if (s < best) best = s;
            }
    cout << best << '\n';
}