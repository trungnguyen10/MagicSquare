#include <iostream>
using namespace std;

bool Is_odd(int);

int main()
{
  int input;
  do
  {
    cout << "Please enter a positive odd number: ";
    getline(cin,input);
    if (!Is_odd(input))
    {
      cout << "Your number is invalid." << endl;
    }
  }while (!Is_ood(input));
  
  
  
  return 0;
}
