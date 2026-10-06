#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    vector <long long> v(n);

    for(auto& x: v){
        cin >> x;
    }

    long long c=0;
    for (int i=1; i<n; i++){
        while (v[i] < v[i-1]){
            v[i]++;
            c++;
        }
    }
    cout << c << '\n';
}