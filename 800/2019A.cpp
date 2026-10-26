#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    
    while (t--){
        int n;
        cin >> n;

        vector <int> a,b;
        for (int i=0; i<n; i++){
            int e;
            cin >> e;
            if (i%2 == 0){
                a.push_back(e);
            }
            else{
                b.push_back(e);
            }
        }

        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int l = a.size();
        int m = b.size();


        int ans = (m!=0) ? max(a[l-1]+l,b[m-1]+m) : a[l-1]+l ;
        

        cout << ans << '\n';
    }
}