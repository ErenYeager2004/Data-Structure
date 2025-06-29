#include<iostream>
#include<deque>
#include<vector>
using namespace std;

vector<int> max_window(vector<int>&arr,int k){
    deque<int>Idx;
    vector<int> result;
    for(int i=0;i<k;i++){
        while(!Idx.empty() && arr[Idx.back()] < arr[i]){
            Idx.pop_back();
        }
        Idx.push_back(i);
    }

    result.push_back(arr[Idx.front()]);

    for(int i = k;i<arr.size();i++){
        if(Idx.front()== (i-k)){
            Idx.pop_front();
        }
        while(!Idx.empty() && arr[Idx.back()] < arr[i]){
            Idx.pop_back();
        }
        Idx.push_back(i);
        result.push_back(arr[Idx.front()]);
    }
    return result;
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<arr.size();i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    vector<int> result;
    result = max_window(arr,k);

    for(int i:result)
    {
        cout<<i<<" ";
    }
}