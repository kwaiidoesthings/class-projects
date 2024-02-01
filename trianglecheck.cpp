#include <iostream>

using namespace std;

enum triangleType{scalene,isosceles,equilateral,noTriangle};


triangleType triangleShape(float, float, float);

int main() {
  float side1, side2, side3;
  triangleType flag;

    cout << "Enter side A:";
      cin >> side1;
    cout << "Enter side B:";
      cin >> side2; 
    cout << "Enter side C:";
      cin >> side3;

  flag = triangleShape(side1,side2,side3);

  
  switch (flag){
    
    case scalene:
    cout << "The triangle is a scalene";
    break;

    case isosceles:
    cout << "The triangle is a isosceles";
    break;

    case equilateral:
    cout << "The triangle is a equilateral";
    break;

      case noTriangle:
    cout << "The triangle is a noTriangle";
    break;
  }
    return 0;
}

triangleType triangleShape(float side1, float side2, float side3){
  triangleType triangleShape;
  if (side1 + side2 <= side3 || side1 + side3 <= side2 || side2 + side3 <= side1){
    triangleShape = noTriangle;
  }
    else if (side1 == side2  && side2 == side3)
    {
      triangleShape = equilateral;}
  else if (side1 != side2 && side2 != side3 && side1 != side3){
    triangleShape = scalene;
  }

  else{
    triangleShape = isosceles;
  }
  return triangleShape;
}