#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void bubbleSort(vector<int>&arr){
    for(int i=0;i<arr.size()-1;i++){
        bool flag = false;
        for(int j=0;j<arr.size()-i-1;j++){
            if(arr[j]>arr[j+1]){
                flag=true;
                swap(arr[j],arr[j+1]);
            }
        }
        if(!flag){
            break;
        }
    }
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }

    bubbleSort(arr);

    cout<<"Sorted array using bubble sort :"<<endl;

    for(int i:arr){
        cout<<i<<" ";
    }
}