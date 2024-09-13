#include<iostream>
#include<cmath>
using namespace std;

void PrintSumProsigure(){
  int Num1;
  int Num2;

  cout << "Please enter first number: ";
  cin >> Num1;

  cout << "Please enter second number: ";
  cin >> Num2;

  cout << endl;

  cout << "___________________________"<< endl;
  cout << Num1 + Num2 << endl;
}

int main(){
  PrintSumProsigure();
  
  return 0;
}