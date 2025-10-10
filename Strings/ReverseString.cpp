#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
  static string reverseString(string& str) {
    string result = "";
    for(int i = str.length() - 1; i >= 0; i--) {
      result += str[i];
    }

    return result;
  }
};

int main() {
  cout<<"Enter a String :";
  string str;
  getline(cin, str);
  cout<<"Reversed string :"<<Solution::reverseString(str);
}
