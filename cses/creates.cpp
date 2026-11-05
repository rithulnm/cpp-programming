#include <bits/stdc++.h>

using namespace std;
using ll = long long;

string s;
int alpha[26];
vector<string> ans;

void search(string current){
    if (current.size() == s.size()){
        ans.push_back(current);
        return;
    }
    for (int i=0; i<26; i++){
        if (alpha[i] > 0){
            alpha[i]--;
            search(current + (char)('a'+i));
            alpha[i]++;
        }
    }

}

int main(){
    cin >> s;
    for (char c : s) alpha[c - 'a']++;

    search("");

    cout << ans.size()<< '\n';
    for(auto x : ans) cout << x << '\n';
}