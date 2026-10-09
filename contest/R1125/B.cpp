#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--){
        int n;
        string s;
        cin >> n;
        cin >> s;

        vector <int> a, b;
        for(int i=1; i<=n; i++){
            if (s[i-1]=='1'){
                a.push_back(i);
            }
            else if (s[i-1] == '2'){
                if (!a.empty()){
                    a.pop_back();
                    b.push_back(i);
                }
            }
        }

        for (auto x : a){
            b.push_back(x);
        }
        sort(b.begin(), b.end());

        cout << b.size() << '\n';
        for(auto x : b){
            cout << x << ' ';
        }
        cout << '\n';
    }

    return 0;
}