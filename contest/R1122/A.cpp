#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int arr[3];

        for(int i = 0; i < 3; i++){
            cin >> arr[i];
        }

        cout << n - min(arr[0],min(arr[1],arr[2])) << '\n';
    }
}