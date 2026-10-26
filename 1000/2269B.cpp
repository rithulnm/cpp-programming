#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(0);

    int t;
    cin >> t;

    while(t--){

        int NIGHTS = 729;
        int n;
        cin >> n;

        vector <ll> v(n);
        for (auto&x : v){
            cin >> x;
        }

        while(NIGHTS--){
            for (int i=0; i<n; i++){
                int s = 0;
                while(v[i] > 0){
                    ll a = v[i]%10;
                    s += (a * a);
                    v[i]/=10;
                }
                v[i] = s;
            }
        }

        ll c = 0;
        for (int i=0; i<n; i++){
            for (int j=i+1; j<n; j++){
                if (v[i] == v[j]){
                    c++;
                }
            }
        }

        cout << c << '\n';
    }
}