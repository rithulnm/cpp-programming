#include <iostream>

using namespace std;
int main(){
    int t;
    cin >> t;

    while(t--){
        long long n;
        cin >> n;
        string a;
        string b;

        cin >> a;
        cin >> b;

        int oneEvenA = 0;
        int oneOddA = 0;
        int zeroEvenB = 0;
        int zeroOddB = 0;

        for(int i=0; i<n; i++){
            if (i%2 == 0){
                if (a[i] == '1'){
                    oneEvenA ++;
                }
                if (b[i] == '0'){
                    zeroEvenB ++;
                }
            }
            else{
                if (a[i] == '1'){
                    oneOddA ++;
                }
                if (b[i] == '0'){
                    zeroOddB ++;
                }
            }
        }

        if (oneEvenA <= zeroOddB && oneOddA <=zeroEvenB){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
}