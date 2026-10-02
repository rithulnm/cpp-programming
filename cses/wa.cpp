#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    long long n;
    cin >> n;

    cout << n << " ";
    while(n>1){
        long long r = (n%2==0) ? n/=2: n = n*3 +1;
        cout << r << " ";
    }

    return 0;
}