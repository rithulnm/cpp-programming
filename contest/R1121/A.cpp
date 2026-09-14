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
        
        int arr[105];
        int w[105];
        int j = 0;

        for(int i=0; i<n; i++){
            cin >> arr[i];

            if (arr[i] != i+1){
                w[j] = i+1;
                j++;
            }
        }
        int g=0;
        for(int i=0; i<j; i++){
            if (arr[w[i]-1] == w[j-i-1]){
                g++;
            }
        }

        if (g==j){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
}