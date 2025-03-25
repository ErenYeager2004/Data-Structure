#include<iostream>
#include<vector>
using namespace std;


void swapZeros(vector<int>&arr){
    for(int i=arr.size()-1;i>=0;i--){
        int j=0;
        bool flag = false;

        while(j!=i){
            if(arr[j]==0 & arr[j+1]!=0){
                swap(arr[j],arr[j+1]);

                flag = true;
            }
            j++;
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

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    swapZeros(arr);

    for(int i:arr){
        cout<<i<<" ";
    }
}