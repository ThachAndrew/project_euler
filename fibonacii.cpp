/*
 * Find sum of even value terms up to 4 mil
 * Fibonacci series for terms
 * working
 */

#include <iostream>
using namespace std;

int main(){
  
  int currentNum = 1, prevNum = 1, nextNum = 0;
  unsigned const long int RANGE = 4000000;
  int sum = 0;
  do{
    if (currentNum % 2 == 0) sum += currentNum;
    cout << currentNum << " ";
    nextNum = currentNum + prevNum;
    prevNum = currentNum;    //keeps track of three positions
    currentNum = nextNum;  
  }while(currentNum<RANGE);


  cout << "Sum: " << sum << endl; 
  return 0;
}
