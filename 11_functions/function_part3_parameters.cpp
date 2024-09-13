#include<iostream>
#include<cmath>
using namespace std;

int ReturnSumFunction(  int Num1, int Num2){

  return Num1 + Num2;
}

int main(){

  int Num1, Num2;
  cout << "Please enter first number: ";
  cin >> Num1;

  cout << "Please enter second number: ";
  cin >> Num2;

  cout << endl;

  cout << "___________________________"<< endl;

  int Result = ReturnSumFunction(Num1,Num2);

  cout << Result << endl;
  
  return 0;
}