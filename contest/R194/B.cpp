#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long x,y,k;
        cin >> x >> y >> k ;

        int s=0;
        while(k--){
            s += y%x;
            x++;
            y++;
        }
        cout << s << '\n';
    }
}