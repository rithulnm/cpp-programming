#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--){
        int n, k;
        cin >> n >> k;

        vector<int> v(n);

        for(auto& x : v){
            cin >> x;
        }

        int c = 0;
        for(int i = 0; i < n; i++){
            if(i + k > n) break;

            bool possible = true;

            for(int j = i; j < i + k; j++){
                if(v[j] == 1){
                    possible = false;
                    break;
                }
            }

            if(possible){
                c++;
                i += k;
            }
        }
        cout << c << '\n';
    }
}
