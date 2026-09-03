#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int p1,p2,p3;

        cin >> p1 >> p2 >> p3;

        int tot = (p1+p2+p3);

        if (tot%2 !=0 ){
            std::cout << -1 << '\n';
        }
        else {
            std::cout << min(tot/2, p1+p2) << '\n';
        }
    }
}