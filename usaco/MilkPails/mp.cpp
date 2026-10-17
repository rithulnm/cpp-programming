#include <bits/stdc++.h>

using namespace std;

int main(){
    ifstream fin("pails.in");
    ofstream fout("pails.out");

    int X,Y,M;
    fin >> X >> Y >> M;

    int i=0; int j=0;
    int tot;
    while (true){
        int tot = X*i + Y*j;
        i++;
        j++;
        if (X*i > M){
            i--;
        }
        if (Y*j > M){
            j--;
        }
        if (tot > M){
            tot = X*(i-1) + Y*(j-1);
            break;
            
        }
    }

    fout << tot << '\n';
}