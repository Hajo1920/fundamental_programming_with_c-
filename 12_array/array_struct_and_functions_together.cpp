#include<iostream>
#include<cmath>
using namespace std;

struct stInfos {
  string FirstName;
  string SecondName;
  short Age;
  string Email;
};

void ReadInfo(stInfos& Info){ 
  cout << "FirstName: " << endl;
  cin >> Info.FirstName;
  cout << "SecondName: " << endl;
  cin >> Info.SecondName;
  cout << "Age: " << endl;
  cin >> Info.Age;
  cout << "Email: " << endl;
  cin >> Info.Email;
};

void PrintInfo(stInfos Info){
  cout << "_-******************************************-_" << endl;
  cout << "FirstName: " << Info.FirstName << endl;
  cout << "SecondName: " << Info.SecondName << endl;
  cout << "Age: " << Info.Age << endl;
  cout << "Email: " << Info.Email << endl;
  cout << "_-******************************************-_" << endl;
};

void Person2(stInfos Info[2]){ 
  ReadInfo(Info[0]);
  ReadInfo(Info[1]);
}

void WritePerson2(stInfos Info[2]){
  PrintInfo(Info[0]);
  cout << endl;
  PrintInfo(Info[1]);
};




int main(){
  stInfos Info[2];

  Person2(Info);
  WritePerson2(Info);
  return 0;

}