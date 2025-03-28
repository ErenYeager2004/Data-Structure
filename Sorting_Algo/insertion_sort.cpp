#include<iostream>
#include<vector>
using namespace std;

void insertionSort(vector<int>&arr){
    for(int i=1;i<arr.size();i++){
        int key = arr[i];
        int j = i-1;
        while(arr[j]>=key && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

int main(){
    int n;
    cin>>n;

    vector<int>arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    insertionSort(arr);

    for(int i:arr){
        cout<<i<<" ";
    }
}