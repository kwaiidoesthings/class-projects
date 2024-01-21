#include <iostream>
using namespace std;

int main (){
int number, num;
int total = 0;
int digits = 0;
  
cout << "Enter number: ";
  cin >> number;
  cout << endl;
  
if (number < 0)
  number*=-1;

while (number > 0){
  total *= 10;
  total += (number % 10);
  number /= 10;
}
  cout << "The digits of the number are: ";

  
while (total!=0){
  num = total % 10;
  total /=10;
  digits += num;
  cout << num << " ";
}
  cout << endl << "Total of all digits: " << digits << endl;

  return 0;
}