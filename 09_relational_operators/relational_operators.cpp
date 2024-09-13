#include<iostream>

using namespace std;

int main() {
   
  short A;
  short B;

  cout << "Enter a number: ";
  cin >> A;
  cout << "Enter another number: ";
  cin >> B;

  cout << "-------------------\n";
  cout << A << " == " << B << ": " << (A == B) << endl; 
  cout << A << " != " << B << ": " << (A!= B) << endl;
  cout << A << " <  " << B << ": " << (A < B) << endl;
  cout << A << " <= " << B << ": " << (A <= B) << endl;
  cout << A << " >  " << B << ": " << (A > B) << endl;
  cout << A << " >= " << B << ": " << (A >= B) << endl;


  

  return 0;
}
