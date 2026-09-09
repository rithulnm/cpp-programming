#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[55];

        int sum = 0;
        for (int i=0; i<n; i++){
            int a;
            cin >> a;
            arr[i] = a;
            sum += a;
        }

        if ((n - sum) <2){
            cout << -1 << '\n';
        }
        else{
            int c=0;
            if (arr[0] == 1){
                c++;
            }
            if (arr[n-1] == 1){
                c++;
            }
            cout << c << '\n';
        } 
    }
}
