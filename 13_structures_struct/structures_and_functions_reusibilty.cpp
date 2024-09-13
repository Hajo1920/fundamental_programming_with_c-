
#include<iostream>
#include <cmath>

using namespace std;
struct stPersonalInfo {
	string FullName;
	short Age;
	string Job;
	string Phone;
	string Email;

};

void ReadInfo(stPersonalInfo Info){

	cout << "Write your full name: ";
	cin.ignore(0, '\n');
	getline(cin, Info.FullName);
	cout << "What is your age: ";
	cin >> Info.Age;
	cout << "What is your Job: ";
	cin.ignore(1, '\n');
	getline(cin, Info.Job);
	cout << "Write your phone number: ";
	cin >> Info.Phone;
	cout << "Write your Email: ";
	cin.ignore(1, '\n');
	getline(cin, Info.Email);


};

void WriteInfo(stPersonalInfo Info){

	cout << "_-****************************************-_" << endl;
	cout << "Full Name: " << Info.FullName << endl;
	cout << "Age: " << Info.Age << endl;
	cout << "Job Title: " << Info.Job << endl;
	cout << "Phone: " << Info.Phone << endl;
	cout << "Email: " << Info.Email << endl;
	cout << "_-****************************************-_" << endl;
}

int main(){

	stPersonalInfo PersnalInfo;
	stPersonalInfo PersnalInfo2;

	ReadInfo(PersnalInfo);
	WriteInfo(PersnalInfo);

	ReadInfo(PersnalInfo2);
	WriteInfo(PersnalInfo2);
	return 0;
}
