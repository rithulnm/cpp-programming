#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> p(n);
    for (auto& x : p){
        cin >> x;
    }

    int c = 0;
    for (int i=0; i<n; i++){
        for (int j=i; j<n; j++){
            int sum = 0;
            for (int k = i; k <= j; k++) sum += p[k];
            int l = j-i+1;

            for(int k=i; k<=j; k++){
                if (p[k]*l == sum){
                    c++;
                    break;
                }
                
            }
        }
    }
    cout << c << '\n';
}