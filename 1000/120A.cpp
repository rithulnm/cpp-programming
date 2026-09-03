#include <iostream>

using namespace std;

int main(){
    string s;
    int a;
    cin >> s;
    cin >> a;

    if (s == "front"){
        if (a == 1){
            cout << "L\n";
        }
        else{
            cout << "R\n";
        }
    }
    else if (s == "back"){
        if (a == 1){
            cout << "R\n";
        }
        else{
            cout << "L\n";
        }
    }
}
