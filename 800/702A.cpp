#include <iostream>

using namespace std;

int main(){
    long long n;
    cin >> n;

    long long* arr = new long long[n];

    for(int i=0; i<n; i++){
        long long a;
        cin >> a;

        arr[i] = a;
    }
    int c=1;
    int temp=0;
    for (int i=0; i<n-1; i++){
        if (arr[i+1] > arr[i]){
            c++;
        }
        else{
            if (c>temp){
                temp = c;
            }
            c = 1;
        }
    }
    int res = (c>temp)?c : temp;

    std::cout << res << '\n';

    delete[] arr;
}
