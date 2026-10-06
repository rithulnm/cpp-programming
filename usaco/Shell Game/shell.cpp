#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <fstream>

using namespace std;

int main(){
    ifstream fin("shell.in");
    ofstream fout("shell.out");

    int t;
    fin >> t;

    vector <int> counter(3,0);
    vector <int> shell = {0,1,2};
    while(t--){
        int a, b, g;
        int temp;
        fin >> a >> b >> g;
        temp = shell[b-1];
        shell[b-1] = shell[a-1];
        shell[a-1] = temp;
        counter[shell[g-1]]++;
    }

    fout << max(counter[0],max(counter[1],counter[2])) << '\n';

}