/*
 * Find largest prime factor in [0, 600851475143]
 * Not working
 */
#define RANGE 600851475143
#include <iostream>
#include <unistd.h> //for pause
using namespace std;

bool isPrime(int);

int main(){
  unsigned long int num = 1; 
  unsigned long int dividend = RANGE;
  while(num <= RANGE/2){
    cout << "Checking num: " << num << endl;
    if(isPrime(num) && dividend % num == 0){
      cout << num << " is prime, and divisible by " << RANGE << endl;
      sleep(1);
    }
    num++;
  }
  return 0;
}

bool isPrime(int num){
      //start at 2, because always divisible by one
  for(int i = 2; i <= num/2; i++)
      if(num % i == 0)
        return false;

  return true;
}
