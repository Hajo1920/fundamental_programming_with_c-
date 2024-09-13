
#include<iostream>
#include <cmath>

using namespace std;

enum enDays {Monday=1, Tuesday=2, Wednesday=3, Thursday=4, Friday=5, Saturday=6, Sunday=7};

void PrintMenu(){
    cout << "*****************************************" << endl;
    cout << "************* -Days Menu- ***************" << endl;
    cout << " Choose from 1 to 7 to show you the date " << endl;
    cout << "(1) Monday" << endl;
    cout << "(2) Tuesday" << endl;
    cout << "(3) Wednesday" << endl;
    cout << "(4) Thursday" << endl;
    cout << "(5) Friday" << endl;
    cout << "(6) Saturday" << endl;
    cout << "(7) Sunday" << endl;
    cout << "*****************************************" << endl;
}

enDays ReadDate(){
    int date;
    cout << "Enter the number: " << endl;
    cin >> date;

    return (enDays) date;
}

string WriteDate(int date){
    switch(date) {
        case enDays::Monday:
            cout << "This is Monday" << endl;
            break;
        case enDays::Tuesday:
            cout << "This is Tuesday" << endl;
            break;
        case enDays::Wednesday:
            cout << "This is Wednesday" << endl;  
            break;
        case enDays::Thursday:
            cout << "This is Thursday" << endl;
            break;
        case enDays::Friday:
            cout << "This is Friday" << endl;
            break;
        case enDays::Saturday:
            cout << "This is Saturday" << endl;
            break;
        case enDays::Sunday:
            cout << "This is Sunday" << endl;
            break;
        default:
            cout << "I think you gone out of day range " << endl;
        
    };

}

int main(){
    PrintMenu();
    cout << WriteDate(ReadDate()) << endl;
	return 0;
}