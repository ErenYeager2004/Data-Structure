#include<iostream>
#include<vector>
using namespace std;


int main(){
    int n;
    cout<<"Enter the size of the vector :";
    cin>>n;
    vector<int>vec(n);
    for(int i=0;i<vec.size();i++){
        cout<<"Enter element of vector at "<<i<<" position :";
        cin>>vec[i];
    }

    for(int i:vec){
        cout<<i<<endl;
    }

}