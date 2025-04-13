#include<iostream>
#include<cstring>
#include<vector>
using namespace std;
//using selection sort

auto sort(char fruit[][60],int n ){
    for(auto i=0;i<n-1;i++){
        int min = i;
        for(auto j=i+1;j<n;j++){
            if(strcmp(fruit[min],fruit[j]) > 0){
                min = j;
            }
        }
        //place the min element at the begining
       if(i!=min){
        swap(fruit[i],fruit[min]);
       }
    }
}
int main(){
   char fruit [][60]={"papaya","lime","watermelon","apple","mango","kiwi"};

   int n = sizeof(fruit)/sizeof(fruit[0]);

   sort(fruit,n);

   for(auto i=0;i<n;i++)
   {
    cout<<fruit[i]<<" ";
   }cout<<endl;
}