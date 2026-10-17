#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;

        bool a = false, b = false;
        for(int i = 1; i < s.size() - 1; i++){
            if (s[i-1] == s[i+1]){
                if (s[i] == s[i-1]){
                    a = true;
                }
                else b = true;
            }
        }
        cout << a + b + 1<< '\n';
    }
}