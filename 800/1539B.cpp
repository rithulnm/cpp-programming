#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    ll n , q;
    cin >> n >> q;
    
    string s;         
    cin >> s;

    vector <ll> v = {0};

    for (int i=1; i<=n; i++){
        v.push_back(v[i-1]+s[i-1]-96);
    }
    while(q--){
        ll l,r;
        cin >> l >> r;

        cout << v[r] - v[l-1] << '\n';
    }

}
