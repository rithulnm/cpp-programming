#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    long long t;
    cin >> t;

    while(t--){
        long long n;
        cin >> n;

        long long sum=0;
        long long* arr = new long long [n];

        for(int i=0; i<n; i++){
            long long a;
            cin >> a;
            int c=0;
            for (int j=0; j<i; j++){
                if (arr[j] == a){
                    c++;
                }

                if (c == 0){
                    arr[i] = a;
                }
            }
        }

        
    }
}