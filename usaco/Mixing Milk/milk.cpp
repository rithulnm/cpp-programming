#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int c1,c2,c3;
    int m1,m2,m3;

    cin >> c1 >> m1;
    cin >> c2 >> m2;
    cin >> c3 >> m3;
   
    for(int i=0; i<100; i++){
        if (i%3 == 0){
            m2 += (m1%c2);
            m1 -= (m1%c2);
        }
        else if (i%3 == 1){
            m3 += (m2%c3);
            m2 -= (m2%c3);
        }
        else{
            m1 += (m3%c1);
            m3 -= (m3%c1);
        }
    }

    cout << m1 << '\n' << m2 << '\n' << m3 << '\n';
}