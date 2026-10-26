#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--){
        int n;
        string s1, s2;

        cin >> n;
        cin >> s1 >> s2;

        int f1 = 0, f2 = 0;

        for(int i = 0; i < n; i++){
            if(s1[i] == 'f'){
                f1++;
            }
            if(s2[i] == 'f'){
                f2++;
            }
        }

        cout << (f1 + f2) % 2 << '\n';
    }
}