#include <iostream>

using namespace std;

int smallestIndex(int arrayNum[], int size);

int main()
{
const int MAX_ARRAY_SIZE = 15;
int testArray1[MAX_ARRAY_SIZE] {56, 34, 67, 54, 56, 87, 66, 92, 15, 32, 55, 54, 88, 92, 30};
int testArray2[MAX_ARRAY_SIZE] {79, 26, 79, 87, 73, 44, 67, 46, 55, 13, 20, 20, 33, 42, 60};
int testArray3[MAX_ARRAY_SIZE] {63, 1, 40, 81, 30, 11, 26, 44, 98, 1, 80, 98, 15, 3, 42};
  
  
   int smallestPosition = smallestIndex(testArray1, MAX_ARRAY_SIZE);
    cout << "The smallest index was position: " << smallestPosition;
    cout << " with a value of: " << testArray1[smallestPosition] << endl;
   int smallestPosition2 = smallestIndex(testArray2, MAX_ARRAY_SIZE);
    cout << "The smallest index was position: " << smallestPosition2;
    cout << " with a value of: " << testArray2[smallestPosition2] << endl;
   int smallestPosition3 = smallestIndex(testArray3, MAX_ARRAY_SIZE);
    cout << "The smallest index was position: " << smallestPosition3;
    cout << " with a value of: " << testArray3[smallestPosition3] << endl;
    return 0;
}

int smallestIndex(int arrayNum[], int size) {
    int smallestnum = 0;
    for (int i = 0; i < size-1; i++) {
        if (arrayNum[i] < arrayNum[smallestnum])
            smallestnum = i;
    }
    return smallestnum;
}