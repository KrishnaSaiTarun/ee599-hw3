#include "solution.h"

// std::string Solution::PrintHelloWorld() { 
//   return "**** Hello World ****"; 
// }

Solution::Solution(const std::vector<int> &v){

    size = v.size();
    pointer = 0; 
    vec = v; 
}

void Solution::initialize(const std::vector<int> &v){
    printVec(v);
    printMenu();
}

void Solution::option(const int op){

      if(op == 1){
      option1();
    }

    else if(op == 2){
      option2();
    }

    else if(op == 3){
      option3();
    }

    else if(op == 4){
      int i = 0;
      std::cout << "Enter the value of i::" << std::endl;
      std::cin >> i;
      option4(i);
    }

    else if(op == 5){
      option5();
    }

    else{
      std::cout << "Option does not exist !!" << std::endl;
    }
}

void Solution::printVec(const std::vector<int> &v){

  printStars();

    std::cout << "Vector: " << v[0];

    for(auto i = 1; i < v.size(); i++){
        std::cout << ", " << v[i];
    }

    std::cout << std::endl; 

  printStars();
}

void Solution::printMenu(){

  std::cout << "Please choose any of the following options: " << std::endl;
  std::cout << "\t" << "1. What is the first element?" << std::endl; 
  std::cout << "\t" << "2. What is the last element?" << std::endl;
  std::cout << "\t" << "3. What is the current element?" << std::endl;
  std::cout << "\t" << "4. What is the ith element from the current location?" << std::endl;
  std::cout << "\t" << "5. Exit." << std::endl;

  printStars();

}

void Solution::option1(){
  
  pointer = 0;
  printout();
  //printStars();
}

void Solution::option2(){

  pointer = size - 1;
  printout();
  //printStars();
}

void Solution::option3(){

  printout();
  //printStars();
}

void Solution::option4(const int i){

  if(pointer + i >= size || pointer + i < 0){

    std::cout << "Output: Sorry! You cannot traverse " << i << " elements from your current location." << std::endl;
    return;
  }

  pointer += i;
  printout();

}

inline void Solution::option5(){
  std::cout << "Exit !" << std::endl;
}


void Solution::printStars(){

    for(int i = 0; i < 70; i++)
      std::cout << "*" ;
    std::cout << std::endl;

}

inline void Solution::printout(){

  std::cout << "Output: " << vec[pointer] << std::endl;

}





