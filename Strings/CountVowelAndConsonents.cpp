#include<iostream>
#include<algorithm>
#include<cctype>
using namespace std;

class Solution {
  public:
  static void countVowelAndConsonants(string& str) {
    int vowel = 0, consonants = 0;
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    for(int i = 0; i < str.length(); i++) {
      if(isalpha(str.at(i))) {
        if(str.at(i) == 'a' || str.at(i) == 'e' || str.at(i) == 'i' || str.at(i) == 'o' || str.at(i) == 'u') {
          vowel++;
        }else{
          consonants++;
        }
      }
    }

    cout << "Vowels : " << vowel << " Consonanats : " << consonants << endl;
  }
};

int main() {
  string str = "I love You !";
  Solution::countVowelAndConsonants(str);
}
