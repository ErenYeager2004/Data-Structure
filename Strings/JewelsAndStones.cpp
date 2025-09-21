#include<iostream>
using namespace std;

class JewelsAndStones{
  public :
  static int jewels_and_stones(string jewels, string stones) {
    int counter = 0;
    for(char s : stones){
      for(char j : jewels){
        if(j == s){
          counter++;
          break;
        }
      }
    }
    return counter;
  }
};
int main(){
  string jewels, stones;
  cin>>jewels>>stones;
  cout<<JewelsAndStones::jewels_and_stones(jewels, stones);
}
