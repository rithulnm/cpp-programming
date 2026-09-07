#include <iostream>
#include <string>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long x;
        cin >> x;

        bool found = false;
        while(x>0){
            if (x%33==0){
                found  = true;
                break;
            }

            else{
                int i=0;
                int y = x;
                std::string s = std::to_string(x);
                while(y--){
                    if(s[i]=='3' && s[i+1]=='3'){
                        s[i] = '\0';
                        s[i+1] = '\0';
                        x = std::stoll(s);
                    }
                    else{
                        x -=33;   
                    }

                    i++;
                }
            }
        }

        if (x==0){
            cout << "YES\n";
        }
        else if (found){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }

    }
}