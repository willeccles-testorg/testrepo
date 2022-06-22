#include <iostream>

int main(int argc, char** argv) {
  const void* x = "Hello, World!\n";
  const char* msg = reinterpret_cast<const char*>(x);
  std::cout << msg;
  return 0;
}
