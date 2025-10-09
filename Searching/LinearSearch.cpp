#include<iostream>
#include<vector>
using namespace std;

class Solution {
  public :
  static int linearSearch(vector<int>&arr, int target) {
    int idx = 0;
    for(int i : arr) {
      if(i == target) {
        return idx;
      }
       idx++;
    }
    return -1;
  }
};

int main() {
  vector<int>arr= {1, 3, 2, 6, 4, 10};
  int target = 10;
  if(Solution::linearSearch(arr, target) == -1) {
    cout<<"Target not found";
  }else {
    cout<<"Target found at index "<<Solution::linearSearch(arr, target);
  }

}
