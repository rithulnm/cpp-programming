#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int a[n];

        for (int i = 0; i < n; i++)
            cin >> a[i];

        int bestL = -1;
        int bestR = -1;
        int best = 0;

        int lastOne = -1;
        int firstMinus = -1;

        for (int i = 0; i <= n; i++) {

            if (i == n || a[i] == 0) {
                lastOne = -1;
                firstMinus = -1;
                continue;
            }

            if (a[i] == 1) {

                // Fixed 1 to fixed 1
                if (lastOne != -1) {
                    if (i - lastOne + 1 > best) {
                        best = i - lastOne + 1;
                        bestL = lastOne;
                        bestR = i;
                    }
                }

                if (firstMinus != -1) {
                    if (i - firstMinus + 1 > best) {
                        best = i - firstMinus + 1;
                        bestL = firstMinus;
                        bestR = i;
                    }
                }

                lastOne = i;
                firstMinus = -1;
            }
            else {

                if (lastOne == -1 && firstMinus == -1)
                    firstMinus = i;
            }
        }

        int start = 0;

        while (start < n) {

            while (start < n && a[start] == 0)
                start++;

            if (start == n)
                break;

            int end = start;

            while (end < n && a[end] != 0)
                end++;

            int first = -1;
            int last = -1;
            bool hasOne = false;

            for (int i = start; i < end; i++) {
                if (a[i] == 1) {
                    hasOne = true;
                    break;
                }

                if (a[i] == -1) {
                    if (first == -1)
                        first = i;
                    last = i;
                }
            }

            if (!hasOne && first != -1 && last != -1) {
                if (last - first + 1 > best) {
                    best = last - first + 1;
                    bestL = first;
                    bestR = last;
                }
            }

            start = end;
        }


        for (int i = 0; i < n; i++) {
            if (a[i] == -1)
                a[i] = 0;
        }

        if (bestL != -1) {
            a[bestL] = 1;
            a[bestR] = 1;
        }

        for (int i = 0; i < n; i++)
            cout << a[i] << " ";

        cout << '\n';
    }

    return 0;
}