#include <iostream>

int main(){
    int t;
    std::cin >> t;

    while(t--){
        int n, a, b;
        std::cin >> n >> a >> b;

        char arr[11];

        for(int i = 0; i < n; i++){
            std::cin >> arr[i];
        }

        int x = 0;
        int y = 0;
        bool pos = false;

        for(int repeat = 0; repeat < 10; repeat++){

            for(int i = 0; i < n; i++){

                if(arr[i] == 'N'){
                    y++;
                }
                else if(arr[i] == 'S'){
                    y--;
                }
                else if(arr[i] == 'E'){
                    x++;
                }
                else if(arr[i] == 'W'){
                    x--;
                }

                if(x == a && y == b){
                    pos = true;
                    break;
                }
            }

            if(pos){
                break;
            }
        }

        if(pos){
            std::cout << "YES\n";
        }
        else{
            std::cout << "NO\n";
        }
    }
}