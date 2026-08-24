#include <iostream>

int main(){
    int n,k;
    std:: cin >> n >> k;
    int q_a_time = 240 - k;
    int i= 1;
    int q_r_time = 0;
    for (i; i<n+1; i++){
        q_r_time = q_r_time + 5*i;
        if (q_r_time > q_a_time){
            break;
        }
    }

    std:: cout << i-1;
}