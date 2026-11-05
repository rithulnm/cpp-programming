#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int n;
vector <int> weights;

ll re_we(int i, ll sum1, ll sum2){
    if (i == n) return abs(sum1 - sum2);

    return min(re_we(i+1,sum1+weights[i],sum2),re_we(i+1,sum1,sum2+weights[i]));
}

int main(){
    cin >> n;
    weights.resize(n);

    for(auto& x: weights) cin >> x;

    cout << re_we(0,0,0) << '\n';

}