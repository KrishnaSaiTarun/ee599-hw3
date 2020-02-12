#include "solution.h"

std::string Solution::PrintHelloWorld() { 
  return "**** Hello World ****"; 
}

std::vector<int> Solution::two_sum(std::vector<int> &v, int sum){

  std::vector<int> result;
  int n = v.size();
  if(n == 0 || n == 1) return result;

  std::unordered_map<int, int> map;

  for(int i = 0; i < n; i++){

    if(map.find(v[i]) != map.end()){
      //Element already exists; That meas found!
      result.push_back(map[v[i]]);
      result.push_back(i);
      return result;
    }
    else{
      map[sum - v[i]] = i;
    }
  }

  return result;


}






