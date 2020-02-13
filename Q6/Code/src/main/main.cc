#include "src/lib/solution.h"


int main() { 

  std::vector<int> v = {1, 4, 5, 23, 100, 12, 18, 175};

  Solution s(v);
  int option = 0; 

  while(1){
    s.initialize(v);
    std::cin >> option;
    s.option(option);
    std::cout << std::endl;
    if(option == 5) break;
  }

  return EXIT_SUCCESS;
}