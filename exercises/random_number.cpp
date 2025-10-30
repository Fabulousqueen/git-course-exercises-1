/*
  Write a program that generates a random number.

  Output:
  The random number is: 4
*/
#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){

  int x = rand();
  cout << "The random number is: " << x << endl;

  return 0;
}
