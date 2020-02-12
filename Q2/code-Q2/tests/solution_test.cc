#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(HelloWorldShould, ReturnHelloWorld) {
  Solution solution;
  std::string actual = solution.PrintHelloWorld();
  std::string expected = "**** Hello World ****";
  EXPECT_EQ(expected, actual);
}

TEST(HelloWorldShould, 2_sum) {
  Solution solution;

  std::vector<int> in = {2, 3, 4, 5, 3};
  std::vector<int> in1 = {2, 3, 5, 3};
  std::vector<int> in2 = {2};
  std::vector<int> in3 = {};


  std::vector<int> actual = solution.two_sum(in, 6);
  std::vector<int> actual1 = solution.two_sum(in, 5);
  std::vector<int> actual2 = solution.two_sum(in, 10);
  std::vector<int> actual3 = solution.two_sum(in1, 6);
  std::vector<int> actual4 = solution.two_sum(in2, 6);
  std::vector<int> actual5 = solution.two_sum(in3, 6);


  std::vector<int> expected = {0,2};
  std::vector<int> expected1 = {0,1};
  std::vector<int> expected2 = {};
  std::vector<int> expected3 = {1,3};
  //std::vector<int> expected4 = {1,3};
  //std::vector<int> expected3 = {1,3};


  EXPECT_EQ(expected, actual);
  EXPECT_EQ(expected1, actual1);
  EXPECT_EQ(expected2, actual2);
  EXPECT_EQ(expected3, actual3);
  EXPECT_EQ(expected2, actual4);
  EXPECT_EQ(expected2, actual5);
}