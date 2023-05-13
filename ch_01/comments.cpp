#include <iostream>

int main() {
  std::cout << "/*";
  std::cout << "*/";
  std::cout << "/* */ */";
  std::cout << /* "*/" /* "/*" */;
  std::cout << "\nFin" << std::endl;
}