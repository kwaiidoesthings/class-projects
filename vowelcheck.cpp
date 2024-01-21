#include <iostream>
#include <string>
using namespace std;



int main(){

string input;
int len;
int num = 0;

cout << "enter a word: ";
  getline(cin, input);


len = input.length();
  for (int i=0; i < len; i++){

    if (isVowel(input[i]))
    num++;
  }
  cout << "There are " << num << " vowels in this sentence.";

    return 0;
}

bool isVowel(char l){
  char vow = tolower(l);
  return vow == 'a' || vow == 'e' || vow == 'i' || vow == 'o' || vow == 'u';
}