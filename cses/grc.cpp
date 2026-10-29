#include <bits/stdc++.h>
#include <bitset>

using namespace std;

void b(unsigned int gray,int n){
    vector <int> v;
    for (int i = 0; i < n; i++) {
        v.push_back(gray % 2);
        gray /= 2;
    }

    for(int i=v.size()-1; i>=0; i--){
        cout << v[i];
    }
}
int main(){
    
    int n;
    cin >> n;

    int times = 1 << n;

    for (int i=0; i<times; i++){
        unsigned int gray = i ^ (i >> 1);
        b(gray,n);
        cout << '\n';
    }
}