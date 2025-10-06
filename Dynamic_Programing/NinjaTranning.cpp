#include<iostream>
#include<vector>
using namespace std;

class Solution {
  public:
  static int getMaxMerit(vector<vector<int>>& arr, int days, int lastTask){
    if(days == 0) {
      int maxi = 0;
      for(int i = 0; i < 3; i++){
        if(i != lastTask){
          maxi = max(maxi, arr[0][i]);
        }
      }
      return maxi;
    }
    int maxi = 0;
    for(int i = 0; i < 3; i++) {
      if(i != lastTask) {
        int points = arr[days][i] + getMaxMerit(arr, days - 1, i);
        maxi = max(maxi, points);
      }
    }
    return maxi;
  }
};

int main() {
  vector<vector<int>> arr = {
    {10, 50, 1},
    {11, 100, 5},
    {100, 100, 100},
    {3, 14, 29}
  };
  cout<<Solution::getMaxMerit(arr, arr.size() - 1, 3);
}
