#include <bits/stdc++.h>

using namespace std;
int main(){
    string s;
    cin >> s;

    vector <int> count(26,0);
    int odds = 0;
    
    
    for (auto i : count){
        if (i%2 !=0){
            odds++;
        }
    }

    string left{};
    string mid{};
    if (odds > 1){
        cout << "NO SOLUTION\n";
    }
    else {
        for (int i=0; i<26; i++){
            if (count[i]%2!=0){
                mid+=string(1,char('A'+i));
                count[i]--;
            }
            left += string(count[i]/2,char('A'+ i));
        }
    

        string right = left;
        reverse(right.begin(),right.end());

        cout << left+mid+right << '\n';

    }
}