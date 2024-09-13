
#include<iostream>
#include <cmath>

using namespace std;

enum enScreenColor {RED=1, GREEN=2, BLUE=3, YELLOW=4, };

int main(){
    int count;
    enScreenColor Color;

    cout << "Choose a color from 1 to 4 ";
    cin >> count;

    Color = (enScreenColor) count;

    if(count == enScreenColor::RED){

        system("color 4F");
    }else if (count == enScreenColor::GREEN ){
       
        system("color 2F");
    }else if (count == enScreenColor::BLUE ){
       
        system("color 1F");
    }else if (count == enScreenColor::YELLOW ){
       
        system("color 6F");
    }else {

    }
    



    
  
	return 0;
}