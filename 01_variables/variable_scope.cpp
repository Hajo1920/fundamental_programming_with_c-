#include<iostream>
#include<cmath>
using namespace std;

int Num1 = 1000, Num2 = 3000;

void SumFunction(){

  int Num1 = 100 ,Num2 = 200;
 cout << "SumFunction Sum of " << Num1 << " and " << Num2 << " is: " << Num1 + Num2 << endl;
}

int main(){

  int Num1 = 5, Num2 = 10;
  cout << "main Variable Sum of " << Num1 << " and " << Num2 << " is: " << Num1 + Num2 << endl;
  SumFunction();

  cout << "Global Variable Sum of " << ::Num1 << " and " << ::Num2 << " is: " << ::Num1 + ::Num2 << endl;


  return 0;
}