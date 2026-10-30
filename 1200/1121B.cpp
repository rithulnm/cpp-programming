#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int n;
    cin >> n;
    vector <ll> sw(n);

    for(auto& s: sw){
        cin >> s;
    }

    ll arr[200001] = {0};
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            arr[sw[i] +sw[j]]++;
        }
    }

    ll ans = 0;
    for (int i=0; i<200001; i++){
        ans = max(ans, arr[i]);
    }
    cout << ans << '\n';
}