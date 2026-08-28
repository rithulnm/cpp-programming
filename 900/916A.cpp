#include <iostream>

int main() {
  int x;
  std::cin >> x;
  int h, m;

  std::cin >> h >> m;
  int ans = 0;

  while (h % 10 != 7 && m % 10 != 7) {
    if (m < x) {
      m = (m + 60 - x) % 60;
      h = (h == 0) ? 23 : h - 1;
    } else {
      m -= x;
    }
    ans++;
  }
  std::cout << ans << '\n';
}