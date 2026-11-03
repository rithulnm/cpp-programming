#include <bits/stdc++.h>

using namespace std;

bool pal(string s){
    if (s[0]==s[4] && s[1]==s[3]) return 1;
    return 0;
}
void solve(){
    string s;
    cin >> s;

    int min = 0;

    while(!pal(s)){
        int hh = (s[0] - '0') * 10 + (s[1] - '0');
        int mm = (s[3] - '0') * 10 + (s[4] - '0');

        mm++;

        if (mm == 60){
            hh++; mm = 0;
        }
        if (hh == 24){
            hh = 0; 
        }
        s[0] = (hh / 10) + '0';
        s[1] = (hh % 10) + '0';
        s[3] = (mm / 10) + '0';
        s[4] = (mm % 10) + '0';

        min++;
    }

    cout << min << '\n';
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();
    return 0;
}