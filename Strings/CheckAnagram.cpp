#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

class CheckAnagram
{
public:
  static bool checkAnagram(string &str1, string &str2)
  {

    if (str1.size() != str2.size())
      return false;

    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    return str1 == str2;
  }
};

int main()
{
  string str1, str2;
  cin >> str1 >> str2;
  if (CheckAnagram ::checkAnagram(str1, str2))
  {
    cout << "Anagram";
  }
  else
  {
    cout << "Not a Anagram";
  }
}
