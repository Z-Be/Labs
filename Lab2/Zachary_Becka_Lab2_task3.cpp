#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

  const double carton_cap = 3.78, cost_rate = 0.38, prof_rate = 0.27;
  double cost, profit;
  int cartons;
  int liters;
  
  cout << "Enter, in liters, the total quantity of milk produced: ";
  cin >> liters;
  cartons = static_cast<int>(liters / carton_cap);
  cost = liters * cost_rate;
  profit = cartons * prof_rate;
  cout << "The number of milk cartons needed to hold milk: " << cartons << endl;
  cout << "The cost of producing milk: $" << cost << endl;
  cout << "Profit: $" << profit << endl;


  return 0;
}
