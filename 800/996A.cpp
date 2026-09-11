#include <iostream>
using namespace std;

int main(){
    long long n;
    cin >> n;

    int c = 0;

    c += n / 100;
    n %= 100;

    c += n / 20;
    n %= 20;

    c += n / 10;
    n %= 10;

    c += n / 5;
    n %= 5;

    c += n;

    cout << c << '\n';
}