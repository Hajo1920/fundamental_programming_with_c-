#include<iostream>

using namespace std;

int main() {
    string Name = "Mohammad Abo Hadhoud";
    short Age = 44;
    string Country = "Jordan";
    string City = "Amman";
    float MonthlySalary = 5000;
    float YearlySalary = MonthlySalary * 12;
    char Gender = 'M';
    bool Married = true;


    cout << "*********************************************************************" << endl;
    cout << "Name: " << Name << endl;
    cout << "Age: " << Age << endl;
    cout << "Country: " << Country << endl;
    cout << "City: " << City << endl;
    cout << "Monthly Salary: $" << MonthlySalary << endl;
    cout << "Yearly Salary: $" << YearlySalary << endl;
    cout << "Gender: " << (Gender == 'M'? "Male" : "Female") << endl;
    cout << "Married: " << Married << endl;
    cout << "*********************************************************************" << endl;
}
