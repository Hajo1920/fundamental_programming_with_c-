#include<iostream>
#include<cmath>
using namespace std;

int main(){
  int employeeNum;
  string Name;
  string Country;

  cout << "Please Write your employee num: ";
  cin >> employeeNum;

  cout << "Please write your name: ";
  cin.ignore(1, '\n');
  getline(cin, Name);

  cout << "Please write your country: ";
  cin >> Country;

  cout << endl;
  cout << "Employee: " << employeeNum << " Name: " << Name << " Country: " << Country << endl;
  return 0;
}