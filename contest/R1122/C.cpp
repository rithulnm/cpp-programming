#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        string s;
        cin >> s;

        if(s[0] == '1'){
            int ans = 0;

            for(int i = 0; i < n; i++){
                if(s[i] == '0'){
                    ans++;
                }
            }

            
            cout << ans << '\n';
            continue;
        }

        int z = 0;

        for (int i=0; i<n; i++){
            if (s[i] == '0'){
                z++;
            }
        }

        int lo = 0;
        int rz = z;
        int ans = n;

        for(int i = 0; i <= n; i++){
            ans = min(ans, lo + rz);
            if(i < n){
                if(s[i] == '1'){
                    lo++;
                }
                else{
                    rz--;
                }
            }
        }

        cout << ans << '\n';
    }
}