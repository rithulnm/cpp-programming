#include <bits/stdc++.h>

using namespace std;

void hanoi(int n,int start,int end){
    if (n==1){
        cout << start << ' ' << end << '\n';
        return;
    }
    int other = 6 - (start+end);
    hanoi(n-1,start,other);
    cout << start << ' ' << end << '\n';
    hanoi(n-1,other,end);
}

int main(){
    int n;
    cin >> n;

    cout << pow(2,n) - 1 << '\n';
    hanoi(n,1,3);
}