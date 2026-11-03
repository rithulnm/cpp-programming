#include <bits/stdc++.h>

using namespace std;


void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;

    int ans = 0;
    for (int i=0; i<n; i++){
        int left[26] = {0}, right[26] = {0};
        int l=0,r=0;
        for (int j = 0; j < i; j++) left[s[j] - 'a']++;
        for (int j = i; j < n; j++) right[s[j] - 'a']++;

        for (int k=0; k<26; k++){
            if (left[k] > 0) l++;
            if (right[k] > 0) r++;
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