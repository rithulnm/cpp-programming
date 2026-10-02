#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    long long t;
    cin >> t;

    while(t--){
        long long a,b,c;
        cin >> a >> b >> c;

        cout << max(abs(a-b), abs(a+c-b)) << '\n';
    }
}
