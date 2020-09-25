#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main() {

  // declare in/outfiles to be used
  ifstream inFile;
  ofstream outFile;

  // declare all variables to be used
  string firstName, lastName, department;
  double monSalary, bonus, taxRate, distTrav, travTime, cofCost;
  int cofSold;
  
  // initialize / open in and out data files with names
  inFile.open("inData.txt");
  outFile.open("outData.txt");
  
  outFile << fixed << showpoint << setprecision(2);

  inFile >> firstName >> lastName >> department;
  inFile >> monSalary >> bonus>> taxRate;
  inFile >> distTrav >> travTime;
  inFile >> cofSold >> cofCost;

  // declare / calculate new variables needed
  taxRate /= 100;
  bonus /= 100;
  double paycheck = (monSalary - (monSalary * taxRate));
  paycheck += paycheck * bonus;
  double averageSpeed = distTrav / travTime;
  double salesAmount = cofCost * cofSold;
  
  // write to outFile
  outFile << "Name: " << firstName << " " << lastName << ", Department: " << department << endl;
  outFile << "Monthly Gross Salary: $" << monSalary << ", Monthly bonus: " << bonus << "%, Taxes: " << taxRate << "%" << endl;
  outFile << "Paycheck: $ " << paycheck << endl;
  outFile << endl;
  outFile << "Distance traveled: " << distTrav << " miles, Traveling time: " << travTime << " hours" << endl;
  outFile << "Average speed: " << averageSpeed << " miles per hour" << endl;
  outFile << endl;
  outFile << "Number of coffee cups sold: " << cofSold << ", Cost: $" << cofCost << " per cup" << endl;
  outFile << "Sales Amount = $" << salesAmount << endl;

  inFile.close();
  outFile.close();


  return 0;
}
