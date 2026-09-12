#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int arr[105];
        int o = 0;

        for(int i=0; i<n; i++){
            int a;
            cin >> a;
            arr[i] = a;

            if(a == 1){
                o++;
            }
        }

        if(o >= (n + 1) / 2){
            cout << "Bessie\n";
        }
        else{
            cout << "Elsie\n";
        }
    }
}