#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

// TEST(HelloWorldShould, ReturnHelloWorld) {
//   Solution solution;
//   std::string actual = solution.PrintHelloWorld();
//   std::string expected = "**** Hello World ****";
//   EXPECT_EQ(expected, actual);
// }

TEST(AcademicRecord, Constructor) {

  AcademicRecord a;

  std::vector<int> actual1 = {a.maths, a.computers, a.physics};
  std::vector<int> expected1 = {0, 0, 0};

    a.maths = 5;
    a.computers = 10;
    a.physics = 95;

    //a++; 

  std::vector<int> actual = {a.maths, a.computers, a.physics};
  std::vector<int> expected = {5, 10, 95};
  
  EXPECT_EQ(expected, actual);
  EXPECT_EQ(expected1, actual1);
}

TEST(AcademicRecord, ConstructorWithVars) {

  AcademicRecord a(5, 10, 95);

  std::vector<int> actual = {a.maths, a.computers, a.physics};
  std::vector<int> expected = {5, 10, 95};
  
  EXPECT_EQ(expected, actual);

}


TEST(AcademicRecord, PostIncrement) {
  AcademicRecord a;

    a.maths = 5;
    a.computers = 10;
    a.physics = 95;

    a++; 

  std::vector<int> actual = {a.maths, a.computers, a.physics};
  std::vector<int> expected = {15, 20, 100};
  
  EXPECT_EQ(expected, actual);
}

TEST(AcademicRecord, PreIncrement) {

  AcademicRecord a;

    a.maths = 5;
    a.computers = 10;
    a.physics = 95;

    ++a; 

  std::vector<int> actual = {a.maths, a.computers, a.physics};
  std::vector<int> expected = {15, 20, 100};
  
  EXPECT_EQ(expected, actual);
}

TEST(AcademicRecord, PostDecrement) {

  AcademicRecord a (5, 10, 95);

  a--; 

  std::vector<int> actual = {a.maths, a.computers, a.physics};
  std::vector<int> expected = {0, 0, 75};
  
  EXPECT_EQ(expected, actual);
}

TEST(AcademicRecord, PreDecrement) {

  AcademicRecord a (5, 10, 95);

  --a; 

  std::vector<int> actual = {a.maths, a.computers, a.physics};
  std::vector<int> expected = {0, 0, 75};
  
  EXPECT_EQ(expected, actual);
}

TEST(AcademicRecord, AddMarks) {

  AcademicRecord a (5, 10, 95);

  a+=10; 

  std::vector<int> actual = {a.maths, a.computers, a.physics};
  std::vector<int> expected = {15, 20, 100};
  
  EXPECT_EQ(expected, actual);
}

TEST(AcademicRecord, ReduceMarks) {

  AcademicRecord a (5, 10, 95);

  a-=10; 

  std::vector<int> actual = {a.maths, a.computers, a.physics};
  std::vector<int> expected = {0, 0, 85};
  
  EXPECT_EQ(expected, actual);
}

TEST(AcademicRecord, CopyConstructoor) {

  AcademicRecord a (5, 10, 95);

  AcademicRecord b = a; 

  std::vector<int> obj1 = {a.maths, a.computers, a.physics};
  std::vector<int> obj2 = {b.maths, b.computers, b.physics};
  
  EXPECT_EQ(obj1, obj2);
}

TEST(AcademicRecord, Comparison) {

  AcademicRecord a (5, 10, 95);

  AcademicRecord b = a; 

  
  bool actual = (b == a); 
  bool expected = true;

  std::vector<int> obj1 = {a.maths, a.computers, a.physics};
  std::vector<int> obj2 = {b.maths, b.computers, b.physics};

  b+=5;   // b -> 10, 15, 100
  a-=5;   // a -> 0, 5, 90

  bool actual1 = (b == a); 
  bool expected1 = false;

  ++a;    // a -> 10, 15, 100
    
  bool actual2 = (b == a); 
  bool expected2 = true;
  
  EXPECT_EQ(obj1, obj2);
  EXPECT_EQ(expected, actual);
  EXPECT_EQ(expected1, actual1);
  EXPECT_EQ(expected2, actual2);
}

