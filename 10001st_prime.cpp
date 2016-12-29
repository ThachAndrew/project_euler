/*
 * List 10 001st(TARGET) prime number
 * Possible Improvements: don't iterate through even numbers
 */

#define TARGET 10001 

#include <iostream>
using namespace std;

bool isPrime(int);

int main(){
  //don't count 2, so even numbers won't be accounted for
  int num = 3; 
  int found = 1;

  while(found < TARGET){
    if (isPrime(num)) found++;
    num += 2; //don't do even nums
  }
  cout << found << "th" << " is " << num-2 << endl;
  return 0;
}

bool isPrime(int num){
      //start at 2, because always divisible by one
      //also doesn't iterate even nums
  for(int i = 2; i <= num/2; i++)
      if(num % i == 0)
        return false;   

  return true;
}
