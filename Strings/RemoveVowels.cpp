#include <iostream>
using namespace std;

class RemoveVowels
{
public:
  static string removeVowels(string &str)
  {
    string temp;
    string vowels = "aeiouAeiou";
    for (int i = 0; i < str.size(); i++)
    {
      if (vowels.find(str[i]) == string::npos)
      {
        temp += str[i];
      }
    }

    return temp;
  }
};

int main()
{
  string str;
  cin >> str;
  cout << RemoveVowels::removeVowels(str);
}
