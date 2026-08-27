#include <iostream>

int main(){
    long long t;
    std::cin >> t;

    while(t--){
        int n,m,rb,cb,rd,cd;

        std::cin >> n >> m >> rb >> cb >> rd >> cd ;

        int time = 0;
        bool fr = false; bool fc = false;
        while(true){
            if (rb == rd || cb == cd){
                break;
            }
            if (rb == n){
                fr = !fr;

            }
            if (cb == m){
                fc = !fc;
            }
            if (fr){
                rb -= 1;
            }
            if (fc){
                cb -= 1;
            }
            if (fr == false){
                rb+=1;
            }
            if (fc == false){
                cb+=1;
            }
            time += 1;
        }
        std::cout << time << '\n';
    }

}