#include<iostream>
#include <cmath>
#include <string>

using namespace std;
int main(){
	string st1 = "43.22"; // to int,float,double
	int N1 = 20; //to string
	double N2 = 33.5; //to string
	float N3 = 33.5; // to string and integer

	int Num1 = stoi(st1);
	float Num2 = stof(st1);
	double Num3 = stod(st1);

	cout << "Integer: " << Num1 << endl;
	cout  <<"Float: " << Num2 << endl;
	cout << "Double: "<< Num3 << endl;

	string str1 = to_string(N1);
	cout << "String: " << str1 << endl;

	string str2 = to_string(N2);
	cout << "String: " << str2 << endl;

	string str3 = to_string(N3);
	cout << "String: " << str3 << endl;

	int Num4 = N3; //implicit
	//or
	// int Num4 = (int) N3; explicit
	cout << "Integer: " << Num4 << endl;
	

	return 0;
}

