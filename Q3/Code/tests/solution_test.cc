#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(HelloWorldShould, ReturnHelloWorld) {
  Solution solution;
  std::string actual = solution.PrintHelloWorld();
  std::string expected = "**** Hello World ****";
  EXPECT_EQ(expected, actual);
}

TEST(SinglyLinkedList, constructor) {

  std::vector<int> v = {1, 2, 3, 4};
  std::vector<int> v1 = {};

  SinglyLinkedList l(v, 10);
  SinglyLinkedList l1(v1, -1);

  std::vector<int> actual = l .VectorizeList();
  std::vector<int> expected = {1, 2, 3, 4};

  std::vector<int> actual1 = l1 .VectorizeList();
  std::vector<int> expected1 = {};
  EXPECT_EQ(expected, actual);
  EXPECT_EQ(expected1, actual1);
}

TEST(SinglyLinkedList, empty) {
  SinglyLinkedList l;

  bool ac = l.empty();
  bool ex = true;

  l.push_front(1);
  l.push_front(2);
  l.push_front(3);
  l.push_front(4);

  bool actual = l.empty();
  bool expected = false;

  EXPECT_EQ(ex, ac);
  EXPECT_EQ(expected, actual);
}
TEST(SinglyLinkedList, size) {
  SinglyLinkedList l;

  int ac = l.size();
  int ex = 0;

  l.push_front(1);
  l.push_front(2);
  l.push_front(3);
  l.push_front(4);

  int actual = l.size();
  int expected = 4;

  EXPECT_EQ(ex, ac);
  EXPECT_EQ(expected, actual);
}

TEST(SinglyLinkedList, push_front) {
  SinglyLinkedList l;
  l.push_front(1);
  l.push_front(2);
  l.push_front(3);
  l.push_front(4);

  std::vector<int> actual = l .VectorizeList();
  std::vector<int> expected = {4, 3, 2, 1};
  EXPECT_EQ(expected, actual);
}

TEST(SinglyLinkedList, push_back) {
  SinglyLinkedList l;
  l.push_back(1);
  l.push_back(2);
  l.push_back(3);
  l.push_back(4);

  std::vector<int> actual = l .VectorizeList();
  std::vector<int> expected = {1, 2, 3, 4};
  EXPECT_EQ(expected, actual);
}

TEST(SinglyLinkedList, insert_after) {
  SinglyLinkedList l;
  l.push_back(1);
  l.insert_after(l.head_, 2);
  l.insert_after(l.head_, 3);
  l.insert_after(l.head_, 4);
  l.insert_after(l.head_, 5);

  std::vector<int> actual = l .VectorizeList();
  std::vector<int> expected = {1, 5, 4, 3, 2};
  EXPECT_EQ(expected, actual);
}

TEST(SinglyLinkedList, get_i_ptr) {
  SinglyLinkedList l;
  l.push_back(1);
  l.insert_after(l.head_, 2);
  l.insert_after(l.head_, 3);
  l.insert_after(l.head_, 4);
  l.insert_after(l.head_, 5);
  ListNode* i1 = l.GetIthPointer(3);
  ListNode* i2 = l.GetIthPointer(2);

  int actual = i1->val;
  int expected = 3;

  int actual1 = i2->val;
  int expected1 = 4;

  EXPECT_EQ(expected, actual);
  EXPECT_EQ(expected1, actual1);
}

TEST(SinglyLinkedList, erase) {
  SinglyLinkedList l;
  l.push_back(1);
  l.insert_after(l.head_, 2);
  l.insert_after(l.head_, 3);
  l.insert_after(l.head_, 4);
  l.insert_after(l.head_, 5);
  ListNode* i1 = l.GetIthPointer(3);
  ListNode* i2 = l.GetIthPointer(2);
  l.erase(i1);
  l.erase(i2);

  std::vector<int> actual = l .VectorizeList();
  std::vector<int> expected = {1, 5, 2};
  EXPECT_EQ(expected, actual);
}

TEST(SinglyLinkedList, pop_front) {
  SinglyLinkedList l;
  l.push_front(1);
  l.push_front(2);
  l.push_front(3);
  l.push_front(4);
  l.pop_front();
  l.pop_front();

  std::vector<int> actual = l .VectorizeList();
  std::vector<int> expected = {2, 1};

  l.pop_front();
  l.pop_front();

  std::vector<int> actual1 = l .VectorizeList();
  std::vector<int> expected1 = {};

  l.pop_front();

  std::vector<int> actual2 = l .VectorizeList();
  std::vector<int> expected2 = {};

  EXPECT_EQ(expected, actual);
  EXPECT_EQ(expected1, actual1);
  EXPECT_EQ(expected2, actual2);
}

TEST(SinglyLinkedList, pop_back) {
  SinglyLinkedList l;
  l.push_front(1);
  l.push_front(2);
  l.push_front(3);
  l.push_front(4);
  l.pop_back();
  l.pop_back();

  std::vector<int> actual = l .VectorizeList();
  std::vector<int> expected = {4, 3};

  l.pop_back();
  //l.pop_back();

  std::vector<int> actual1 = l .VectorizeList();
  std::vector<int> expected1 = {4};

  l.pop_back();

  std::vector<int> actual2 = l .VectorizeList();
  std::vector<int> expected2 = {};

  EXPECT_EQ(expected, actual);
  EXPECT_EQ(expected1, actual1);
  EXPECT_EQ(expected2, actual2);
}

TEST(SinglyLinkedList, back) {
  SinglyLinkedList l;
  l.push_front(1);
  l.push_front(2);
  l.push_front(3);
  l.push_front(4);
  l.pop_back();
  l.pop_back();
  int l0 = l.back();
  //std::vector<int> actual = l .VectorizeList();
  int expected = 3;

  l.pop_back();
  //l.pop_back();
  int l1 = l.back();

  //std::vector<int> actual1 = l .VectorizeList();
  int expected1 = 4;

  l.pop_back();
  int l2 = l.back();

  //std::vector<int> actual2 = l .VectorizeList();
  int expected2 = -1;

  EXPECT_EQ(expected, l0);
  EXPECT_EQ(expected1, l1);
  EXPECT_EQ(expected2, l2);
}

TEST(SinglyLinkedList, front) {
  SinglyLinkedList l;
  l.push_front(1);
  l.push_front(2);
  l.push_front(3);
  l.push_front(4);
  l.pop_front();
  l.pop_front();
  
  int f = l.front();

  //std::vector<int> actual = l .VectorizeList();
  int expected = 2;

  l.pop_front();
  l.pop_front();

  //std::vector<int> actual1 = l .VectorizeList();
  int f1 = l.front();
  int expected1 = -1;

  EXPECT_EQ(expected, f);
  EXPECT_EQ(expected1, f1);

}

TEST(SinglyLinkedList, get_back_ptr) {
  SinglyLinkedList l;
  l.push_back(1);
  l.insert_after(l.head_, 2);
  l.insert_after(l.head_, 3);
  l.insert_after(l.head_, 4);
  l.insert_after(l.head_, 5);
  ListNode* i1 = l.GetBackPointer();
  int actual = i1->val;
  int expected = 2;

  l.pop_back();
  ListNode* i2 = l.GetBackPointer();
  int actual1 = i2->val;
  int expected1 = 3;

  EXPECT_EQ(expected, actual);
  EXPECT_EQ(expected1, actual1);
}


