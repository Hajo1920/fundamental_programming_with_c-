#include<iostream>
#include <cmath>
#include <string>

using namespace std;
int main(){

	string st1;
	string st2;
	string st3;

	cout << "Please enter a space having long string: ";
	getline(cin, st1);

	cout << "Please enter a string(number): ";
	cin >> st2;

	cout << "Please enter a string(number): ";
	cin >> st3;



	cout << endl;
	cout << "***************************************" << endl;
	cout << "The length of String-1 is: " << st1.length() << endl;
	cout << "Character at 0 2 4 7 are: " << st1[0] << " " << st1[2] << " " << st1[4] << " " << st1[7] << endl;
	cout << "Concatinating String-2 and String-3: " << st2+st3 << endl;
	cout << "5 * 10: " << stoi(st2) * stoi(st3) << endl;










	return 0;
}

