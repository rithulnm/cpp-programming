#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<ll> a(n), sum;
        for (auto& x : a){
            cin >> x;
        }

        for (int i = 0; i + 4 < n; i++){
            sum.push_back(a[i] + a[i+2] - a[i+4]);
        }

        int m = sum.size();
        ll c = 0;
        map<ll, ll> cnt;

        for (int j = 0; j < m; j++){
            c += cnt[sum[j]]; 
            if (j >= 2 && sum[j-2] == sum[j]) c--;
            if (j >= 4 && sum[j-4] == sum[j]) c--;
            cnt[sum[j]]++;
        }

        cout << c << '\n';
    }
}