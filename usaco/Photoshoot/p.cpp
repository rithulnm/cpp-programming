#include <bits/stdc++.h>
using namespace std;

int main(){
    ifstream fin("photo.in");
    ofstream fout("photo.out");

    int n;
    fin >> n;

    vector<int> b(n-1), a(n);

    for (auto &x : b) fin >> x;

    for (int start = 1; start <= n; start++){
        a[0] = start;

        for (int i = 1; i < n; i++){
            a[i] = b[i-1] - a[i-1];
        }

        vector<int> vis(n+1, 0);
        bool pos = true;

        for (int x : a){
            if (x < 1 || x > n || vis[x]){
                pos = false;
                break;
            }
            vis[x] = 1;
        }

        if (pos){
            for(int o = 0; o<n; o++){
                if (o == n-1) cout<< a[o] ;
                else cout << a[o] << ' ';
            }
            break;
        }
    }
    return 0;
}