#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve(){
    ifstream fin("balancing.in");
    ofstream fout("balancing.out");

    int n,b;
    fin >> n >> b;
    vector<pair<int,int>> pos;

    for (int i=0; i<n; i++){
        int xi, yi;
        fin >> xi >> yi;
        pos.push_back({xi, yi});
    }
    int p,q,r,s;
    int t ; int ans = b;
    for(int i=0; i<pos.size(); i++){
        for (int j=0; j<pos.size(); j++){
            p = 0; q = 0; r = 0; s = 0;
            for(int k=0; k<pos.size(); k++){
                if (pos[k].first>pos[i].first+1 && pos[k].second >pos[j].second+1) p++;
                else if (pos[k].first<pos[i].first+1 && pos[k].second >pos[j].second+1) q++;
                else if (pos[k].first<pos[i].first+1 && pos[k].second <pos[j].second+1) r++;
                else if (pos[k].first>pos[i].first+1 && pos[k].second <pos[j].second+1) s++;
            }
            t = max(p,max(q,max(r,s)));
            ans = min(ans,t);
        }
    }

    fout << ans << '\n';
}

int main(){
    solve();
    return 0;
}