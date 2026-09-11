#include <iostream>

using namespace std;

int main(){
    long long t;
    cin >> t;

    while(t--){
        int n;
        int arr[105];

        cin >> n;

        int s = 0;
        int two = 0;
        int one = 0;
        for (int i=0; i<n; i++){
            int a;
            cin >> a;
            arr[i] = a;
            s+=a;

            if (a == 2){
                two++;
            }
            else{
                one++;
            }
        }

        if (s % 2 != 0) {
            cout << "NO\n";
        }
        else if (one == 0 && two % 2 != 0) {
            cout << "NO\n";
        }
        else {
            cout << "YES\n";
        }
    }
}
