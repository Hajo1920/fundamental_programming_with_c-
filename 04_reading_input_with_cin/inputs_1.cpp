#include<iostream>

using namespace std;

int main() {

  string Name;
  short Age;
  string Country;
  string City;
  float MonthlySalary;
  char Gender;
  bool Married;

  cout << "Name: ";
  cin >> Name;
  cout << "Age: ";
  cin >> Age;
  cout << "Country: ";
  cin >> Country;
  cout << "City: ";
  cin >> City;
  cout << "Monthly Salary: ";
  cin >> MonthlySalary;
  cout << "Gender M for Male or F for Female: ";
  cin >> Gender;
  cout << "Married 1 for Yes - 0 for No: ";
  cin >> Married;

   cout << "\n\n\n\n\nPersonal Information: \n";

  cout << "*********************************************************************" << endl;
  cout << "Name: " << Name << endl;
  cout << "Age: " << Age << endl;
  cout << "Country: " << Country << endl;
  cout << "City: " << City << endl;
  cout << "Monthly Salary: $" << MonthlySalary << endl;
  cout << "Yearly Salary: $" << MonthlySalary * 12 << endl;
  cout << "Gender: " << (Gender == 'M'? "Male" : Gender == 'F'? "Female" : "Unknown") << endl;
  cout << "Married: " << (Married == 0? "No" : Married == 1?  "Yes" :"Unknown") << endl;
  cout << "*********************************************************************" << endl;

  return 0;
}
