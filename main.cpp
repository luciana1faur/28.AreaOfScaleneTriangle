#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int latura1, latura2;
  double unghi;
  float aria;
  float PI;

  cout << "Find the area of Scalene Triangle :" << endl;
  cout << "-------------------------------------" << endl;
  
  cout << "Care este prima latura a triunghiului? ";
  cin >> latura1;
  cout << "Care este a doua latura a triunghiului? ";
  cin >> latura2;
  cout << "Care este unghiul triunghiului? ";
  cin >> unghi;
  PI = 3.14;
  aria = (latura1 * latura2 * sin((PI/180) * unghi))/2;

  cout << "Aria triunghiului este: " << aria << endl;

  return 0;

  
}
//area = (side1 * side2 * sin((PI/180)*ang1))/2;