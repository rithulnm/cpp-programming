#include <iostream>
#include <cmath>
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--){
        ll y,x;
        cin >> y >> x;

        ll n = max(y,x);
        ll ans;
        if (n%2!=0){
            ll r = 1;
            ll c = n;

            ans = n*n - abs(y-r) - abs(c-x); 
        }
        else{
            ll r = n;
            ll c = 1;

            ans = n*n - abs(x-c) - abs(r-y);
        }

        cout << ans << '\n';
    }
}