#include <iostream>



int main() {

  int x;
  std::cout << "Enter a number, 0 or negative to quit" << '\n';
  std::cin >> x;
  while (x > 0) {
    switch (x) { // switch contains additional parameters from C++17
    case 1:
      std::cout << "you have entered 1" << '\n';
      break;
    case 2:
    case 3:
      std::cout << "you have entered 2 or 3" << '\n';
      break;
    case 4:
      std::cout << "you have entered 4" << '\n';
      break;
    case 5:
      std::cout << "you have entered 5" << '\n';
      break;
    default:
      std::cout << "you have entered number other then 1-5" << '\n';
      break;
    }
    std::cout << "Enter a number, 0 or negative to quit" << '\n';
    std::cin >> x;
  }

  return 0;
}