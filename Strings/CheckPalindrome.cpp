#include <iostream>
#include <algorithm>
using namespace std;

class CheckPalindrome
{
public:
  static bool isPalindrome(string &str)
  {
    string temp;
    for (int i = str.size() - 1; i >= 0; i--)
    {
      temp += str[i];
    }

    return str == temp;
  }
};

int main()
{
  string str;
  cin >> str;
  if (CheckPalindrome ::isPalindrome(str))
  {
    cout << "Palindrome";
  }
  else
  {
    cout << "Not a Palindrome";
  }
}
