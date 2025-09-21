#include <iostream>
#include <vector>
using namespace std;

class MergeSort
{
public:
  static void mergesort(vector<int> &arr, int low, int high)
  {
    int mid = low + (high - low) / 2;
    if (low >= high)
      return;

    mergesort(arr, low, mid);
    mergesort(arr, mid + 1, high);
    merge(arr, low, mid, high);
  }

  static void merge(vector<int> &arr, int low, int mid, int high)
  {
    int i = low;
    int j = mid + 1;
    vector<int> temp;
    while (i <= mid && j <= high)
    {
      if (arr[i] < arr[j])
      {
        temp.push_back(arr[i]);
        i++;
      }
      else
      {
        temp.push_back(arr[j]);
        j++;
      }
    }

    while (i <= mid)
    {
      temp.push_back(arr[i]);
      i++;
    }

    while (j <= high)
    {
      temp.push_back(arr[j]);
      j++;
    }

    for(int i = low; i <= high; i++) {
      arr[i] = temp.at(i - low);
    }
  }
};

int main()
{
  vector<int> arr = {2, 1, 3, 5, 10, 7};
  int low = 0;
  int high = arr.size() - 1;
  MergeSort::mergesort(arr, low, high);
  for(int i : arr) {
    cout<<i<<" ";
  }
}
