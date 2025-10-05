#include<iostream>
#include<vector>
using namespace std;

class Solution{
  public :
  static int maxSumNonAdjacent(vector<int>& arr, int idx){
    if(idx == 0) return arr[idx];
    if(idx < 0) return 0;

    int pick = arr[idx] + maxSumNonAdjacent(arr, idx - 2);
    int notPick = maxSumNonAdjacent(arr, idx - 1);

    return max(pick, notPick);
  }

  static int maxSumNonAdjacent2(vector<int>&arr, vector<int>& dp, int idx) {
    if(idx == 0) return arr[idx];
    if(idx < 0) return 0;
    if(dp[idx] != -1) return dp[idx];
    int pick = arr[idx] + maxSumNonAdjacent2(arr, dp, idx - 2);
    int notPick = maxSumNonAdjacent2(arr, dp, idx - 1);
    return dp[idx] = max(pick, notPick);
  }
};

int main() {
  vector<int> arr = {1, 2, 4};
  int n = arr.size();
  vector<int> dp(n, -1);
  cout<<Solution::maxSumNonAdjacent(arr, n-1) << endl;
  cout<<Solution::maxSumNonAdjacent2(dp, arr, n - 1);
}
