#include <iostream>
#include <stdio.h>
#include <iomanip>

using namespace std;

int main() {

  double weight_kilo, weight_lb, conversion;
  conversion = 2.2;

  cout << fixed << showpoint << setprecision(2);
  
  cout << "Enter the weight in kilograms: ";
  cin >> weight_kilo;
  weight_lb = weight_kilo * conversion;

  cout << "The equivalent in pounds = " << weight_lb << endl;










  return 0;

}
