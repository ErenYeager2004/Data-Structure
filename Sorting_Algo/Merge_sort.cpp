#include<iostream>
#include<vector>
using namespace std;

void merge(vector<size_t>&arr,int l,int mid,int r){
    //create 2 temp arr;
    int a = mid-l+1;
    int b = r-mid;

    vector<size_t>arr1(a);
    vector<size_t>arr2(b);

    for(int i=0;i<a;i++){
        arr1[i]=arr[l+i];
    }

    for(int j=0;j<b;j++){
        arr2[j]=arr[mid+1+j];
    }

    int i=0;
    int j=0;
    int k=l;

    while(i<a && j<b){
        if(arr1[i]<arr2[j]){
            arr[k++] = arr1[i++];
        }
        else{
            arr[k++] = arr2[j++];
        }
    }

    while(i<a){
        arr[k++] = arr1[i++];
    }

    while(j<b){
        arr[k++] = arr2[j++];
    }

}

void mergeSort(vector<size_t>&arr,int l,int r){
    //base case
    if(l>=r) return ;

    //recursive case
    int mid = (l+r)/2;
    mergeSort(arr,l,mid);
    mergeSort(arr,mid+1,r);
    merge(arr,l,mid,r);
}



int main(){
    int n;
    cout<<"Enter array size :";
    cin>>n;
    vector<size_t>arr(n); 
    int r=arr.size()-1;
    for(size_t i =0;i<arr.size();i++){
        cin>>arr[i];
    }

    mergeSort(arr,0,r);

    for(size_t i:arr){
        cout<<i<<" ";
    }cout<<endl;


}
