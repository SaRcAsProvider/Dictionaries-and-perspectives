//
// Created by ilya on 11.07.2022.
//
#include <iostream>
#include <set>
void input (std::set <int> &mass) {
  int size = 0;
  std::cin >> size;
  int count = 0;
  for (int i = 0; i < size; i++) {
    std::cin >> count;
    mass.insert(count);
  }
}
void output (std::set <int> const &mass) {
  for (auto i : mass) {
    std::cout << i << " ";
  }
  std::cout << "\n";
}
int main () {
  std::set <int> mass1;
  input(mass1);
  std::set <int> mass2;
  input(mass2);
  int number = 0;
  for (auto i : mass1) {
    if (mass2.find(i) != mass2.end()) number++;
  }
  std::cout << number;
  return 0;
}
