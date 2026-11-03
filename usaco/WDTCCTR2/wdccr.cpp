#include <bits/stdc++.h>

using namespace std;

void solve(){
    ifstream fin("circlecross.in");
    ofstream fout("circlecross.out");

    string s;
    fin >> s;

    int first[26], second[26];
    for (int k = 0; k < 26; k++) first[k] = -1;

    for (int i = 0; i < 52; i++) {
        int cow = s[i] - 'A';
        if (first[cow] == -1) first[cow] = i;
        else second[cow] = i;
    }

    int c= 0;
    for (int a = 0; a < 26; a++) {
        for (int b = a + 1; b < 26; b++) {
            if ((first[a] < first[b] && first[b] < second[a] && second[a] < second[b]) ||
                (first[b] < first[a] && first[a] < second[b] && second[b] < second[a])) c++;
        }
    }

    fout << c << '\n';
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();
    return 0;
}