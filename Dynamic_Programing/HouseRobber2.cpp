#include<iostream>
#include<vector>
using namespace std;

class Solution{
  public:
  static int roberry(vector<int>&arr){
    if(arr.size() == 0) return 0;
    if(arr.size() == 1) return arr[0];
    if(arr.size() == 2) return max(arr[0], arr[1]);

    int first = arr[0];
    int second = 0;
    for(int i = 1; i <= arr.size()-2; i++){
      int pick = arr[i] + second;
      int notPick = first;

      int curr = max(pick, notPick);
      second = first;
      first = curr;
    }

    int third = arr[1];
    int forth = 0;

    for(int i = 2; i <= arr.size()-1; i++) {
      int pick = arr[i] + forth;
      int notPick = third;

      int curr = max(pick, notPick);
      forth = third;
      third = curr;
    }

    return max(first, third);
  }
};
int main(){
  vector<int>arr = {1, 3, 4, 5};
  cout<<Solution::roberry(arr);
}
