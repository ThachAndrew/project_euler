/*
 * Finds sum of primes up to 2 mil
 * working/untested
 */ 
#include <iostream>
#define TARGET 2000000
using namespace std;
bool isPrime(int);
int main(){            //iterates through odd numbers, starting from 3
  unsigned long int num = 3;
  unsigned long int sum = 0;
  while(num < TARGET){
    cout << "Checking num: " << num; 
    if (isPrime(num)){
      sum += num;
      cout << "\n** Sum = " << sum << endl;
    }
    num += 2;
  }                  //account for skipped 2 
  cout << "Sum = " << sum+2 << endl;
  return 0;
}
bool isPrime(int num){
      //start at 2, because always divisible by one
  for(int i = 2; i <= num/2; i++)
      if(num % i == 0)
        return false;

  return true;
}
