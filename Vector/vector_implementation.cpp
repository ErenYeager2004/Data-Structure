#include<iostream>
#include<vector>
#define fo(i,n) for(i=0;i<n;i++)
#define in cin
using namespace std;


int main(){
    int n,i;
    cout<<"Enter the size of the vector :";
    cin>>n;
    vector<int>vec(n);
    
    fo(i,n){
        cout<<"Enter element of vector at "<<i<<" position :";
        in>>vec[i];
    }
    
    for(int i:vec){
        cout<<i<<endl;
    }

}