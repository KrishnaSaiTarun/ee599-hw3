#include "solution.h"

std::string Solution::PrintHelloWorld() { 
  return "**** Hello World ****"; 
}

SinglyLinkedList::SinglyLinkedList(){

  size_ = 0;
  head_ = NULL;
}


SinglyLinkedList::SinglyLinkedList(const std::vector<int> &inputs, int i){

  int n = inputs.size();  
  size_ = 0;
  if(n == 0) return;
  ListNode* i_ptr = NULL;

  head_ = new ListNode(inputs[0]);
  size_ += 1;
  ListNode* last_ptr = head_;
  if(i == 0) i_ptr = head_;


  for(int j = 1; j < n; j++){

    ListNode* newNode = new ListNode(inputs[j]);
    size_+= 1;
    last_ptr->next = newNode;
    last_ptr = newNode;
    if(j == i) i_ptr = newNode;

  }

  last_ptr = i_ptr;

}

SinglyLinkedList::~SinglyLinkedList() {

    ListNode* cur = head_;
    head_ = NULL;

    while(cur!=NULL){

      ListNode* next = cur->next;
      delete cur;
      cur = next;

    }

    size_ = 0;

   } // destructor, cleans up

bool SinglyLinkedList::empty(){

    return size_ == 0;

  } // checks if empty

int SinglyLinkedList::size(){

    return size_;

  } // returns size

void SinglyLinkedList::push_back(int i){

    ListNode* newNode = new ListNode(i);
    size_ += 1;

    if(head_ == NULL){
      head_ = newNode;
      return;
    }

    ListNode* cur = head_;

    while(cur->next != NULL){
      cur = cur->next;
    }

    cur->next = newNode; 
  } // inserts at the back

void SinglyLinkedList::push_front(int i){

    ListNode* prev_head = head_;

    head_ = new ListNode(i);
    head_->next = prev_head;
    size_ += 1;
  } // inserts at the front

void SinglyLinkedList::insert_after(ListNode* p, int i){

    if(p == NULL) return;

    ListNode* next = p->next;
    ListNode* newNode = new ListNode(i);
    size_ += 1;
    p->next = newNode;
    newNode->next = next;

  } // inserts value i after p

void SinglyLinkedList::erase(ListNode* p){

    if(p == NULL) return;

    ListNode* prev = head_;
    ListNode* next = p->next;

    while(prev->next != p) prev = prev->next;

    prev->next = next;

    delete p;
    //p = NULL;
    size_ -= 1;
    
  } // Erases node p

void SinglyLinkedList::pop_front(){

    if(head_ == NULL) return;

    ListNode* next = head_->next;

    delete head_;
    size_ -= 1;
    head_ = next;


  } // removes the first item

void SinglyLinkedList::pop_back(){

    if(head_ == NULL) return;

    ListNode* prev = head_;
    if(head_->next ==  NULL) {
      
      delete prev;
      size_ -= 1;
      head_ = NULL;
      return;
    }

    
    ListNode* cur = head_;
    while(cur->next!=NULL){
      prev = cur;
      cur = cur->next;
    }

    
    delete cur;
    size_  -= 1;
    prev->next = NULL;

  } // removes the last item

int SinglyLinkedList::back(){

    if(head_ == NULL) return -1;
    ListNode* cur = head_;

    while(cur->next != NULL) cur = cur->next;

    return cur->val;
  } // returns the value of last item

int SinglyLinkedList::front(){

    if(head_ == NULL) return -1;
    return head_->val;
  } // returns the value of first item

ListNode *SinglyLinkedList::GetBackPointer(){

  if(head_ == NULL) return head_;
        
  ListNode* cur = head_;

  while(cur->next != NULL) cur = cur->next;

    return cur;

  } // Returns pointer to last item

  // Returns pointer to i(th) element
ListNode *SinglyLinkedList::GetIthPointer(int i){

    // Assuming 0 is the first pointer
    ListNode* cur = head_;

    while(i != 0) 
    {
      cur = cur->next;
      i -= 1;
    }

    return cur;


  }

  // Prints the list: ex. Empty list: {}. List with items: {1, 2, 3}
void SinglyLinkedList::print(){

    std::cout << "{" ;

    ListNode* cur = head_;
    
    if(head_ == NULL) {
      std::cout << "}" ;
      return;
    }

    else{
      std::cout << cur->val;
    }

    while(cur->next != NULL){

      cur = cur->next;
      std::cout << ", " << cur->val;

    }

    std::cout << "}" << std::endl;


  }

std::vector<int> SinglyLinkedList::VectorizeList(){

  std::vector<int> list = {};
  
  ListNode* cur = head_;

  while(cur!=NULL){

    list.push_back(cur->val);
    cur = cur->next;
  }

  return list; 

}






