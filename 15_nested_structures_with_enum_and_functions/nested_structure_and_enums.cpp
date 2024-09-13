#include<iostream>
#include<cmath>

using namespace std;

struct stAddress {
  string street;
  string poBox;
};

struct stWork {
  string jobTitle;
  stAddress Adress;
};

struct stPersonalInfo {
  string name;
  short age;
  string country;
  string city;
  int monthlySalary;
  int yearlySalary;
  string gender;
  bool married;
  stWork myWork;
};

enum enFavoriteColors { RED, GREEN, BLUE, YELLOW, ORANGE };
enum enEducation { Bachelor, Master, PhD };

int main() {
  short Age = 25;

  stPersonalInfo myInfo;
  string myName =  myInfo.name = "Ahmed Osman";
  short myAge = myInfo.age = Age;
  string myCountry =  myInfo.country = "Eritrea";
  string myCity = myInfo.city = "Adi-Keyih";
  int monthlySalary = myInfo.monthlySalary = 8000;
  int yearlySalary = monthlySalary * 12;
  enFavoriteColors favoriteColor;
  enEducation education;
  string myJobTitle = myInfo.myWork.jobTitle = "Software Engineer";;
  string Adress = myInfo.myWork.Adress.street = "Abu Nakla, ST,254";
  string Pobox = myInfo.myWork.Adress.poBox = "24153";
  string gender = "Male";
  bool martialStatus = myInfo.married = false;

  favoriteColor  = enFavoriteColors::RED;
  education = enEducation::Bachelor;


  cout << "***********************************************" << endl;
  cout << "Name: " << myName << endl;
  cout << "Age: " << myAge << endl;
  cout << "Country: " << myCountry << endl;
  cout << "City: " << myCity << endl;
  cout << "Job Title: " << myJobTitle << endl;
  cout << "Education: " << education << endl;
  cout << "Salary: $" << monthlySalary << " Per/Month" << endl;
  cout << "Salary: $" << yearlySalary << " Per/year" << endl;
  cout << "Gender: " << gender << endl;
  cout << "Married: " << martialStatus << endl;
  cout << "Adress(Street): " << Adress << endl;
  cout << "PoBox: " << Pobox << endl;
  cout << "***********************************************" << endl;

  return 0;
}
