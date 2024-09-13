
#include<iostream>
#include <cmath>

using namespace std;

int main(){

	float grades[3];
    cout << "Enter Grade1: ";
    cin >> grades[0];

    cout << "Enter Grade2: ";
    cin >> grades[1];

    cout << "Enter Grade3: ";
    cin >> grades[2];
    
	float result = (grades[0]+grades[1]+grades[2])/3;

    cout << "_____________________________________" << endl;

    cout << "The Average Grade is: " << result << endl;
	

	return 0;
}