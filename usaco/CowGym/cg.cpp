#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    ifstream fin("gymnastics.in");
    ofstream fout("gymnastics.out");

    int k, n;
    fin >> k >> n;

    vector<vector<int>> pos(k, vector<int>(n + 1));

    for (int s = 0; s < k; s++) {
        for (int i = 0; i < n; i++) {
            int cow;
            fin >> cow;
            pos[s][cow] = i+1;
        }
    }

    int ans = 0;
    for (int i=0; i<n; i++){
        for (int j=i+1; j<n; j++){
            int c = 0;
            for (int s = 0; s < k; s++){
                if ((pos[s][i+1] - pos[s][j+1]) < 0){
                    c--;
                }
                else{
                    c++;
                }
            }

            if (abs(c) == k){
                ans++;
            }
        }
    }

    fout << ans << '\n';
}