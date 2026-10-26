#include <bits/stdc++.h>

using namespace std;

int main(){
    ifstream fin("diamond.in");
    ofstream fout("diamond.out");
    int n,k;
    fin >> n >> k;

    vector <int> v(n);

    for (auto& a : v){
        fin >> a;
    }

    int ans = -1;
    
    sort(v.begin(),v.end());
    for (int i=0; i<n; i++){
        int end = i+1;
        int best = 1;
        while(end < n){
            if (v[end]-v[i] <=k){
                best++;
            }
            end++;
        }
        ans = max(best,ans);
    }

    fout << ans << '\n';
}