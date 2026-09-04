#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int arr[105];
        for (int i=0; i<n; i++){
            int a;
            cin >> a;
            arr[i] = a;
        }

        bool found = false;
        for (int i=0; i<n; i++){
            for (int j=0; j<n; j++){
                if (i==j){
                    continue;
                }
                if (arr[i] == arr[j]){
                    found = true;
                    break;
                }
            }
        }
        if (found){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
}
