#include<iostream>
using namespace std;

class Solution {
  public:
  static void printFirstWord(string& str) {
    for(int i = 0; i < str.length(); i++) {
      if(str.at(i) != ' '){
        if(i == 0 || str.at(i - 1) == ' '){
          cout<<str.at(i)<<" ";
        }
      }
    }
  }
};

int main() {
  string str = "  Koi Mil Gaya";
  Solution::printFirstWord(str);
}
