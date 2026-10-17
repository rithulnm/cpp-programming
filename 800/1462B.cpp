#include <iostream>
#include <string>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        string s;
        cin >> s;

        bool pos = false;
        string target = "2020";
        for (int k=0; k<=target.size(); k++){
            if ((s.substr(0,k)==target.substr(0,k)) && (s.substr(n-(4-k))==target.substr(k))){
                pos = true;
                break;
            }
        }

        if (pos){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
}