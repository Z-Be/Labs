
#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;

int main() {
  // Initialize variables
  double x1, x2, y1, y2, side1, side2, distance;

  // Prompt user for values and get them
  cout << "Enter the values for x1, y1, x2, and y2" << endl;
  cin >> x1 >> y1 >> x2 >> y2;
  cout << endl;
  
  // Create sides for simplification
  side1 = x2 - x1;
  side2 = y2 - y1;

  //Calculate distance
  distance = sqrt((side1 * side1) + (side2 * side2));

  // Display distance to user
  cout << "The distance between the two points is " << distance << endl;
  








  return 0;
}
