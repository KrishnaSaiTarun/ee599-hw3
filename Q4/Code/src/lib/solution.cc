#include "solution.h"

std::string Solution::PrintHelloWorld() { 
  return "**** Hello World ****"; 
}

bool Solution::isValid(const std::string &s){

  std::stack<char> q;

  for(auto i = 0; i < s.length(); i++){

   if(s[i]=='(' || s[i] == '{' || s[i] == '['){
      q.push(s[i]);
    }

    else if(s[i]==')' || s[i] == '}' || s[i] == ']'){

      if(q.empty())
        return false;

      else if(s[i] == ')' ){
        if(q.top() != '(')
        return false;
      }

      else if(s[i] == '}'){
        if(q.top() != '{')
        return false;
      }

      else if(s[i] == ']'){
        if(q.top() != '[')
        return false;
      }

      q.pop();
    }
            
  }

  if(!q.empty())
  return false;

  return true;

}






