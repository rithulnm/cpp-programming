#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector <int> v;
    int n = 10;
    for(int i = 1; i <= n; i++){
        v.push_back(i); 
    }

    while(n--){
        cout << v[n] << " ";
    }
    cout << '\n';
    cout << sizeof(v);
    cout << size(v);
}