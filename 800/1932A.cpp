#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;

    while(t--){
        int n;
        cin >> n;

        string s;
        cin >> s;
        int c=0;
        for(int i=1; i<n; i++){
            if (s[i] == '@'){
                c++;
            }
            else if (s[i] == '*'){
                if (s[i+1]=='*'){
                    break;
                }
            }
        }

        cout << c << '\n';
    }
}