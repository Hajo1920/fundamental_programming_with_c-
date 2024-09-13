
#include<iostream>
#include <cmath>

using namespace std;

enum enScreenColor {RED=1, GREEN=2, BLUE=3, YELLOW=4, };

int main(){
    int count;
    enScreenColor Color;

    cout << "Choose a color from 1 to 4 ";
    cin >> count;

    switch(count) {
        case enScreenColor::RED:
            system("color 4F");
        case enScreenColor::GREEN:
            system("color 2F");
        case enScreenColor::BLUE:
            system("color 1F");  
        case enScreenColor::YELLOW:
            system("color 6F");
        default:
            system("color 5F");
        
    };

	return 0;
}