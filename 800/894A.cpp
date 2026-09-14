#include <iostream>

using namespace std;

int main(){
    string s;
    cin >> s;
    
    int ans=0;
    for(int i=0; i<s.size(); i++){
        int l=0;
        int r=0;
        if (s[i] == 'A'){
            for (int j=0; j<i; j++){
                if (s[j]=='Q'){
                    l++;
                     
                }
            }
            for(int k=i+1; k<s.size(); k++){
                if (s[k]=='Q'){
                    r++;
                }
            }
            ans += l*r;
        }
    }

    cout << ans << '\n';
}