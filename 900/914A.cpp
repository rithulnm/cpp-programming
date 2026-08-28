#include <iostream>
#include <cmath>
#include <climits>
#include <algorithm>

int main() {
    int n;
    long long larg = LLONG_MIN;

    std::cin >> n;

    while (n--) {
        long long a;
        std::cin >> a;

        if (a < 0) {
            larg = std::max(larg, a);
        }
        else {
            long long root = sqrt(a);

            if (root * root != a) {
                larg = std::max(larg, a);
            }
        }
    }

    std::cout << larg << '\n';
}