#include <iostream>
#include <numeric>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int f,l;
        for (int i=0; i<n; i++){
            int a;
            cin >> a;

            if (i==0){
                f = a;
            }
            if (i == n-1){
                l = a;
            }
        }

        cout << gcd(f,l) << '\n';
    }
}