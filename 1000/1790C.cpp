#include <iostream>

int main(){
    int t;
    std::cin >> t;

    while(t--){
        int n;
        std::cin >> n;

        long long arr[105][105];
        long long sums[105]; 

        for(int i=0; i<n; i++){
            sums[i] = 0;
            for(int j=0; j<n-1; j++){
                long long a;
                std::cin >> a;
                arr[i][j] = a;
                sums[i] += a;
            }
        }

        long long total = (long long)n*(n+1)/2;

        long long ans[105];
        bool found = false;

        long long miss0 = total - sums[0];
        for (int pos = 0; pos < n && !found; pos++){

            long long cand[105];
            for (int k = 0; k < pos; k++) cand[k] = arr[0][k];
            cand[pos] = miss0;
            for (int k = pos; k < n-1; k++) cand[k+1] = arr[0][k];


            bool ok = true;
            for (int s = 0; s < n && ok; s++){
                long long missS = total - sums[s];
                // find missS in cand
                int idx = -1;
                for (int k = 0; k < n; k++){
                    if (cand[k] == missS){ idx = k; break; }
                }

                int p = 0;
                for (int k = 0; k < n; k++){
                    if (k == idx) continue;
                    if (cand[k] != arr[s][p]){ ok = false; break; }
                    p++;
                }
            }

            if (ok){
                for (int k = 0; k < n; k++) ans[k] = cand[k];
                found = true;
            }
        }

        for (int i = 0; i < n; i++){
            std::cout << ans[i] << ' ';
        }
        std::cout << '\n';
    }
}