#include <iostream>
#include <algorithm>
#include <string>

int main(){
    int t;
    std::cin >> t;

    while(t--){
        int n,m;
        std::cin >> n >> m;
        std:: string* arr = new std::string[n];

        for (int i=0; i<n; i++){
            std::string s;
            std::cin >> s;

            arr[i] = s;
        }

        int c = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++)
                c = c+ ((arr[i][j]>arr[i][j+1]) ? arr[i][j]-arr[i][j+1]:arr[i][j+1]-arr[i][j]);
        }

        std::cout << c;
    }
}