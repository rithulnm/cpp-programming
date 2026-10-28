/*Write a program that asks the user to input a number between 0 and 255. 
Print this number as an 8-bit binary number (of the form #### ####). 
Don’t use any bitwise operators. Don’t use std::bitset.*/


#include <iostream>
#include <vector>
using namespace std;

int main() {
    int inp;
    cin >> inp;

    vector<int> v;

    while (inp > 0) {
        v.push_back(inp % 2);
        inp /= 2;
    }

    while (v.size() < 8) {
        v.push_back(0);
    }

    for (int i = 7; i >= 0; i--) {
        cout << v[i];
        if (i == 4) {
            cout << " ";
        }
    }

    return 0;
}
