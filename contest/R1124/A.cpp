#include <iostream>
#include <cmath>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--){
        int n, k;
        cin >> n >> k;

        int p = pow(2, n-k+1) + 2*(k-1);
        cout << max(2*n, p) << '\n';
    }
}
