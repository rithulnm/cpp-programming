#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    long long t;
    cin >> t;

    while(t--){
        long long n, m;
        cin >> n >> m;

        vector<long long> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        long long score = -1e18;
        multiset<long long> s;
        long long tot = 0;
        for(int i = 0; i < m-1; i++){
            s.insert(arr[i]);
            tot += arr[i];
        }

        
        for(int j = m-1; j < n; j++){
            long long val = m * arr[j] - tot;
            score = max(score, val);

            if(m > 1 && arr[j] < *s.rbegin()){
                tot -= *s.rbegin();
                s.erase(prev(s.end()));
                s.insert(arr[j]);
                tot += arr[j];
            }
        }

        cout << score << '\n';
    }
}