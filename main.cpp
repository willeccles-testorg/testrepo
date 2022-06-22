#include <iostream>

void f1() {
  for (int i = 0; i >= 0; ++i) {
  }
}

void f2() {
  std::cout << "Hello, World!\n";
}

void (*volatile p1)(void) = f1;
void (*volatile p2)(void) = f2;

int main(int argc, char** argv) {
  p1();
  return 0;
}
