#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <fstream>

using namespace std;

int main() {

  double curSal, newSal, monSal, retSal, salInc;
  const double payInc = 0.076;
  
  cout << fixed << showpoint << setprecision(2);

  cout << "Enter current annual salary. \n I'll return new annual salary, monthly salary, and retroactive pay"
       << endl;
  cin >> curSal;

  salInc = curSal * payInc;
  newSal = curSal + salInc;
  retSal = salInc / 2;
  monSal = newSal / 12;

  cout << "new annual salary " << newSal << endl;
  cout << "new monthly salary "<< monSal << endl;
  cout << "retroactive salary due: " << retSal << endl;

  ofstream OutFile;
  OutFile.open("Output.txt");
  OutFile << fixed << showpoint << setprecision(2);
  OutFile << "new annual salary " << newSal << endl;                                                              OutFile << "new monthly salary "<< monSal << endl;                                                            
  OutFile << "retroactive salary due: " << retSal << endl;   

  OutFile.close();


  return 0;
}
