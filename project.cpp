#include <iostream> 
#include "header.h"

using namespace std;

int main()
{
  int first, second;
  cout << "Enter first number: ";
  cin >> first;
  cout << "Enter second number: ";
  cin >> second;
  
  cout << "____added: " << add(first, second) << endl;
  cout << "subtracted: " << sub(first, second) << endl;
  return 0;
}
