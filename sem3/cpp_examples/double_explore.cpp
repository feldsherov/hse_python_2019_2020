#include <iostream>

union double_explore {
  double d;
  char a[8];
};

void print_double_explore(double d) {
  double_explore de;
  de.d = d;
  std::cout << "d = " << d << " bin: ";
  for (int i = 0; i < 8; ++i) {
    // https://ru.wikipedia.org/wiki/%D0%9F%D0%BE%D1%80%D1%8F%D0%B4%D0%BE%D0%BA_%D0%B1%D0%B0%D0%B9%D1%82%D0%BE%D0%B2
    for (int j = 0; j < 8; ++j) {
      std::cout << ((de.a[i] >> j) & 1);
    }
    std::cout << " ";
  }
  std::cout << std::endl;
}

int main() {
  // https://ru.wikipedia.org/wiki/%D0%A7%D0%B8%D1%81%D0%BB%D0%BE_%D0%B4%D0%B2%D0%BE%D0%B9%D0%BD%D0%BE%D0%B9_%D1%82%D0%BE%D1%87%D0%BD%D0%BE%D1%81%D1%82%D0%B8
  print_double_explore(0);
  print_double_explore(1);
  print_double_explore(-1);
  print_double_explore(2);
  print_double_explore(-2);
  print_double_explore(3);
  print_double_explore(-3);
  print_double_explore(4);
  print_double_explore(-4);
  print_double_explore(0.1);
  print_double_explore(-0.1);
  print_double_explore(10);
  print_double_explore(-10);
  return 0;
}
