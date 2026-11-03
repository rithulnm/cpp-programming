#include <bits/stdc++.h>

using namespace std;


void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector <int> cnt(26,0),p(26,0);
    int ans = 0;
    for (auto x : s) cnt[x-'a']++;

    for (int i=0; i<n; i++){

        int l=0,r=0;
        cnt[s[i]-'a']--;
        p[s[i]-'a']++;

        for (int k=0; k<26; k++){
            if (p[k] > 0) l++;
            if (cnt[k] > 0) r++;
        }

        ans = max(ans,(l+r));
    }
    cout << ans << '\n';
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