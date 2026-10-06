#include <bits/stdc++.h>

using namespace std;

int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(0);

    int t;
    cin >> t;

    while(t--){
        int n;
        string s;

        cin >> n;
        cin >> s;

        int m=0;
        int i=0;
        int ans = 0;
        while(s[i] != '\0'){
            int l=0;
            for (i=m; i<n; i++){
                if (s[i] == '*'){
                    m = i+1;
                    break;
                }
                else if (s[i] == '#'){
                    l++;
                }
            }
            if (l%2!=0){
                l++;
            }

            ans = max(l/2,ans);
        }
        cout << ans << '\n';

    }
}
