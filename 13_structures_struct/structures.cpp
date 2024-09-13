#include<iostream>
#include<cmath>
#include <string>

using namespace std;

struct address {
  string street;
  string poBox;
};

struct work {
  string jobTitle;
  address Adress;
};

struct PersonalInfo {
  string name;
  short age;
  string country;
  string city;
  int monthlySalary;
  int yearlySalary;
  char gender;
  bool married;


  work myWork;
};

int main() {

  short Age = 25;


  PersonalInfo myInfo;
  string myName =  myInfo.name = "Ahmed Osman";
  short myAge = myInfo.age = Age;
  string myCountry =  myInfo.country = "Eritrea";
  string myCity = myInfo.city = "Adi-Keyih";
  int monthlySalary = myInfo.monthlySalary = 8000;
  int yearlySalary = monthlySalary * 12;
  char gender = myInfo.gender = 'M';
  bool married = myInfo.married = false;
  string myJobTitle = myInfo.myWork.jobTitle = "Software Engineer";;
  string Adress = myInfo.myWork.Adress.street = "Abu Nakla, ST,254";
  string Pobox = myInfo.myWork.Adress.poBox = "24153";


  cout << "***********************************************" << endl;
  cout << "Name: " << myName << endl;
  cout << "Age: " << myAge << endl;
  cout << "Country: " << myCountry << endl;
  cout << "City: " << myCity << endl;
  cout << "Job Title: " << myJobTitle << endl;
  cout << "Salary: $" << monthlySalary << " Per/Month" << endl;
  cout << "Salary: $" << yearlySalary << " Per/year" << endl;
  cout << "Gender: " << gender << endl;
  cout << "Married: " << married << endl;
  cout << " Adress(Street): " << Adress << endl;
  cout << "PoBox: " << Pobox << endl;
  cout << "***********************************************" << endl;
  

  return 0;
}
