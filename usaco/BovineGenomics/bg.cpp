#include <bits/stdc++.h>

using namespace std;

void solve(){
    ifstream fin("cownomics.in");
    ofstream fout("cownomics.out");
    
    int n, m;
    fin >> n >> m;

    vector <string> s(2*n);

    for(int i = 0; i < 2*n; i++){
        fin >> s[i];
    }

    int ans = m;
    for(int i=0; i<m; i++){
        bool pos = true;
        for(int j=0; j<n; j++){
            for (int k=n; k<2*n; k++){
                if (s[j][i] == s[k][i]){
                    ans--;
                    pos = false;
                    break;
                }
            }
            if (pos == false) break;
        }
    }

    fout << ans << '\n';
}


int main(){
    
    solve();
    return 0;
}