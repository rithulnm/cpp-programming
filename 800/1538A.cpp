#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        
        int arr[105];
        int s = 1000; int g=0;
        int si = -1; int gi = -1;
        for(int i=0; i<n; i++){
            int a;
            cin >> a;

            arr[i] = a;
            s = std::min(s,a);
            g = std::max(g,a);

        }

        for (int i=0; i<n; i++){
            if (arr[i] == s){
                si = i;
            }
            if (arr[i] == g){
                gi = i;
            }
        }

        int c1 = min(si+1, n-si) + min(gi+1,n-gi);
        int c2 = min(si+1, n-si) + abs(gi-si);
        int c3 = min(gi+1,n-gi) + abs(gi-si);
        int count = min(c1, min(c2,c3));
        
        std::cout << count << '\n';
    }
}