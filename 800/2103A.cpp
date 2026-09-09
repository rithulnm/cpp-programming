#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int arr[105] = {0};

        for(int k=0; k<n; k++){
            int a;
            cin >> a;
            arr[a] +=1;
        }

        int c=0;
        for(int i=0; i<=n; i++){
            if (arr[i] > 1){
                c += arr[i] - 1;
            }
        }

        cout << n-c << '\n';
    }
}