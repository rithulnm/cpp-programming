#include <iostream>
#include <string>

using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int k;
        cin >> k;
        string n;
        cin >> n;

        int dig = 0;
        string ans;
        bool found = false;

        for (int i=0; i<k; i++){
            int num = n[i] - '0';
            if (!isPrime(num)){
                dig = 1;
                ans = string(1, n[i]);
                found = true;
            }
            for (int i = 0; i < k && !found; i++){
                for (int j = i+1; j < k && !found; j++){
                    int number = (n[i]-'0') * 10 + (n[j]-'0');
                    if (!isPrime(number)){
                        dig = 2;
                        ans = string(1, n[i]) + n[j];
                        found = true;
                    }
                }
            }
        }

        cout << dig << '\n';
        cout << ans << '\n';
    }
}