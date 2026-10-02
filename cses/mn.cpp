#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    long long n;
    cin >> n;

    long long tot = n*(n+1)/2;
    long long sum = 0;
    for (int i=0; i<n-1; i++){
        long long a;
        cin >> a;
        sum +=a;
    }

    cout << tot - sum << '\n';
}