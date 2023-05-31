#include <iostream>

int main() {
  int counted_number = 0;
  int counted_number_count = 0;
  if (std::cin >> counted_number) {
    int number = 0;
    ++counted_number_count;
    while (static_cast<bool>(std::cin >> number)) {
      std::cout << "loop"<< std::endl;
      if (number == counted_number){
        ++counted_number_count;
        number = 0;
      }
      else {
        std::cout << counted_number << ": " << counted_number_count << std::endl;
        counted_number = number;
        counted_number_count = 1;
        number = 0;
      }
    }
    std::cout << counted_number << ": " << counted_number_count << std::endl;
  }
}
