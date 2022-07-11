#include <iostream>
#include <set>
int main() {
  int n = 0;
  std::cin >> n;
  std::set <int> mass;
  int count = 0;
  for (int  i = 0; i < n; i++) {
    std::cin >> count;
    mass.insert(count);
  }
  std::cout << mass.size() << std::endl;
  return 0;
}
