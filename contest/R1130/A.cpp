#include <bits/stdc++.h>

using namespace std;

int calc(vector<int> v, int n, int k){
    vector<int> f;
    vector<bool> seen(n+1, false);

    for(int i=1; i<=n; i++){
        seen[v[i]] = true;

        int mex = 0;
        while(seen[mex]){
            mex++;
        }

        f.push_back(mex);
    }

    sort(f.begin(), f.end(), greater<int>());

    return f[k-1];
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--){
        int n, k;
        cin >> n >> k;

        vector<int> v = {0};

        for(int i=0; i<n; i++){
            int a;
            cin >> a;
            v.push_back(a);
        }

        int best = calc(v, n, k);
        int x = -1, y = -1;

        for(int i=1; i<=n; i++){
            for(int j=i+1; j<=n; j++){
                swap(v[i], v[j]);

                int cur = calc(v, n, k);

                if(cur > best){
                    best = cur;
                    x = i;
                    y = j;
                }

                swap(v[i], v[j]);
            }
        }

        if(x == -1){
            cout << -1 << '\n';
        }
        else{
            cout << x << " " << y << '\n';
        }
    }
}
