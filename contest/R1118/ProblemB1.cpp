#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,m;
        scanf("%d %d",&n,&m);
        vector<int> cnt(m+1,0);
        for(int i=0;i<n;i++){
            int x; scanf("%d",&x);
            cnt[x]++;
        }
        vector<int> prefix(m+1,0);
        for(int i=1;i<=m;i++) prefix[i]=prefix[i-1]+cnt[i];

        long long Amax=0;
        for(int x=1;x<=m;x++){
            long long val = (long long)cnt[x] + (n - prefix[x]);
            if(2*x<=m) val += cnt[2*x];
            Amax = max(Amax, val);
        }

        vector<pair<int,int>> items(m); // (cnt, value)
        for(int v=1; v<=m; v++) items[v-1] = {cnt[v], v};
        int K = min(m,6);
        partial_sort(items.begin(), items.begin()+K, items.end(),
                     [](const pair<int,int>&A,const pair<int,int>&B){return A.first>B.first;});

        long long Bmax=0;
        for(int i=0;i<K;i++){
            for(int j=i+1;j<K;j++){
                int p=items[i].second, q=items[j].second;
                if(p>q) swap(p,q);
                if(q==2*p) continue;
                Bmax = max(Bmax, (long long)items[i].first+items[j].first);
            }
        }

        printf("%lld\n", max(Amax,Bmax));
    }
}