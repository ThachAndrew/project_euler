/*
 * Find sum of all multiples of 3 or 5 below 1000
 */

#define RANGE 1000

#include <iostream>
using namespace std;

int main(){
  int sum = 0;
  for (int i = 0; i < RANGE; i++)
    if (i % 3 == 0 || i % 5 == 0)
      sum += i;
    
  cout << "Sum: " << sum << endl;
   
  return 0;
}
