#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (auto& x : a) cin >> x;
    for (auto& y : b) cin >> y;

    vector<long long> cnt(n + 1, 0);

    int base = 0;
    for (int k = 0; k < n; k++)
        if (a[k] == b[k]) base++;

    auto change = [&](int l, int r) {
        int d = 0;
        if (a[l] == b[l]) d--;
        if (a[r] == b[r]) d--;
        if (a[r] == b[l]) d++;
        if (a[l] == b[r]) d++;
        return d;
    };

    for (int i = 0; i < n; i++) {
        int l = i, r = i;
        int cur = base;
        cnt[cur]++;
        while (l - 1 >= 0 && r + 1 < n) {
            l--; r++;
            cur += change(l, r);
            cnt[cur]++;
        }
    }

    for (int i = 0; i + 1 < n; i++) {
        int l = i, r = i + 1;
        int cur = base + change(l, r);
        cnt[cur]++;
        while (l - 1 >= 0 && r + 1 < n) {
            l--; r++;
            cur += change(l, r);
            cnt[cur]++;
        }
    }

    for (int c = 0; c <= n; c++) cout << cnt[c] << '\n';
    return 0;
}