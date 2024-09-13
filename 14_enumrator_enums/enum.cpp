#include<iostream>
using namespace std;
int main(){
  enum enEnum {Monday=1, Tuesday=2, Wednesday=3, Thursday=4, Friday=5, Saturday=6, Sunday=7};

  cout << enEnum::Monday << endl;
  cout << enEnum::Tuesday << endl;
  cout << enEnum::Wednesday << endl;
  cout << enEnum::Thursday << endl;
  cout << enEnum::Friday << endl;
  cout << enEnum::Saturday << endl;
  cout << enEnum::Sunday << endl;

  return 0;
}