#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

  int test1, test2, test3, test4;
  double average;
  
  cout << "Enter the score for test1" << endl;
  cin >> test1;
  cout << "Enter the score for test2" << endl;
  cin >> test2;
  cout << "Enter the score for test3" << endl;
  cin >> test3;
  cout << "Enter the score for test4" << endl;
  cin >> test4;
  average = (test1 + test2 + test3 +test4) / 4;

  cout << "Your average is " << average << endl;




  return 0;
 }
