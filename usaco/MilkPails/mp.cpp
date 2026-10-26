#include <bits/stdc++.h>

using namespace std;

int main(){
    ifstream fin("pails.in");
    ofstream fout("pails.out");

    int X,Y,M;
    fin >> X >> Y >> M;

    int best = 0;
    for (int a=0; (a*X)<=M; a++){
        for (int b=0; (a*X + b*Y)<=M; b++){
            best = max(best,a*X + b*Y);
        }
    }

    fout << best << '\n';
}