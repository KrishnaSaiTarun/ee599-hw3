#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(HelloWorldShould, ReturnHelloWorld) {
  Solution solution;
  std::string actual = solution.PrintHelloWorld();
  std::string expected = "**** Hello World ****";
  EXPECT_EQ(expected, actual);
}

TEST(HelloWorldShould, Valid_Parenthesis) {
  Solution solution;
  std::string s = "(a+b)";
  bool ac = solution.isValid(s);
  bool ex = true;

  std::string s1 = "(a+b)[c*d]{5g+h}";
  bool ac1 = solution.isValid(s1);
  bool ex1 = true;

  std::string s2 = "(a+b]";
  bool ac2 = solution.isValid(s2);
  bool ex2 = false;

  std::string s3 = "(7h+[5c)+7]";
  bool ac3 = solution.isValid(s3);
  bool ex3 = false;

  std::string s4 = "{2k+[5j]}";
  bool ac4 = solution.isValid(s4);
  bool ex4 = true;

  std::string s5 = "{2k++[5--*j]}";
  bool ac5 = solution.isValid(s5);
  bool ex5 = true;

  std::string expected = "**** Hello World ****";
  EXPECT_EQ(ex, ac);
  EXPECT_EQ(ex1, ac1);
  EXPECT_EQ(ex2, ac2);
  EXPECT_EQ(ex3, ac3);
  EXPECT_EQ(ex4, ac4);
  EXPECT_EQ(ex5, ac5);
}