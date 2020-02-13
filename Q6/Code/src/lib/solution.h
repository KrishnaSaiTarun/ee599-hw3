#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H

#include <string>
#include <vector>
#include <map>
#include <iostream>

class Solution {
public:


  Solution(const std::vector<int> &v);

  void initialize(const std::vector<int> &v);
  void option(const int op);

private: 

  int size = 0;
  int pointer = -1;
  std::vector<int> vec = {}; 

  void printStars();
  inline void printout();

  void option1();
  void option2();
  void option3();
  void option4(const int i);
  inline void option5();
  void printVec(const std::vector<int> &v);
  void printMenu();

  
};

#endif