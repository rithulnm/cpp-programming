#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll n;
    cin >> n;

    if (n%4==1 || n%4==2 ){
        cout << "NO\n";
    }
    else{
        cout << "YES\n";

        vector <int> a;
        vector <int> b;

        int start = 1;

        if (n%4 == 3){
            a = {1,2};
            b = {3};
            start = 4;
        }

        for(int i=start; i<n; i+=4){
            a.push_back(i);
            a.push_back(i+3);
            b.push_back(i+1);
            b.push_back(i+2);
        }

        cout << a.size() << '\n';
        for(auto x: a) cout << x << " ";
        cout << '\n';
        cout << b.size() << '\n';
        for(auto x: b) cout << x << " ";
        cout << '\n';

    }
}