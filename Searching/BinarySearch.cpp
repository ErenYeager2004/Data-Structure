#include<iostream>
#include<vector>
using namespace std;

class Soltution {
  public :
    static int binarySearch(vector<int>& arr, int target) {
      int low = 0;
      int high = arr.size() - 1;
      while (low <= high) {
        int mid = (low + high) / 2;
        if(arr[mid] == target) {
          return mid;
        }else if(arr[mid] < target) {
          low = mid + 1;
        }else{
          high = mid - 1;
        }
      }
      return -1;
    }
};

int main() {
  vector<int> arr = {1, 2, 3, 4, 5, 6};
  int target = 6;
  if(Soltution::binarySearch(arr, target) == -1){
    cout<<"Target not found in the array";
  }else{
    cout<<"Target found at index " <<Soltution::binarySearch(arr, target);
  }
}
