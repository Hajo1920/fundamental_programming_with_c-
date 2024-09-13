#include<iostream>
#include <cmath>

using namespace std;


int main(){
  int input;
  int sum = 0;

  for(int x = 1; x <= 5; x++){
  cout << "Add a number: ";
  cin >> input;
  if(input >= 50){
    continue;
  }
  sum+=input;
  }
  cout << "Total sum: "<< sum << endl;
}