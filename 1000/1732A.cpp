#include <bits/stdc++.h>

using namespace std;

long long mgcd(long long a, long long b){
    while (b != 0){
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}


int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        long long* arr = new long long[n];
        for (int i=0; i<n; i++){
            long long a;
            cin >> a;
            arr[i] = a;
        }

        long long g = 0;
        for (int i=0; i<n; i++){
            g = mgcd(arr[i],g);
        }

        if (g==1){
            cout << 0 << '\n';
            continue;
        }

        int cost = INT_MAX;
        for(int i=0; i<n; i++){
            int rem = 0;
            for(int j=0; j<n; j++){
                if (j != i){
                    rem = mgcd(rem, arr[j]);
                }
                int mod = mgcd(arr[i],i+1);
                if (mgcd(mod,rem)==1){
                    cost = min(cost, n - i);
                }
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                int rest = 0;
                for (int k = 0; k < n; k++)
                    if (k != i && k != j) rest = mgcd(rest, arr[k]);
                int m1 = mgcd(arr[i], i + 1);
                int m2 = mgcd(arr[j], j + 1);
                if (mgcd(mgcd(rest, m1), m2) == 1)
                    cost = min(cost, (n - i) + (n - j));
            }
        }

        cout << cost << "\n";
    }
}