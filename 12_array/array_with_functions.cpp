#include<iostream>
#include <cmath>

using namespace std;

void ReadInfo(float grades[3]){
    cout << "Enter Grade1: ";
    cin >> grades[0];

    cout << "Enter Grade2: ";
    cin >> grades[1];

    cout << "Enter Grade3: ";
    cin >> grades[2];
};

float PrintInfo(float grades[3]){
    return (grades[0]+grades[1]+grades[2])/3;
};


int main(){

	float grades[3];

    ReadInfo(grades);
    
    cout << "_____________________________________" << endl;

    cout << "The Average Grade is: " << PrintInfo(grades) << endl;
	
	return 0;
}