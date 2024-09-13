#include<iostream>
#include<cmath>
using namespace std;

void ReadData(int Arr[100], int &Length ){
  cout << "Enter Number from 1 - 100: ";
  cin >> Length;
  for (int iterator = 0; iterator <= Length-1; iterator++){
    cout << "Enter Number "<< iterator + 1 << ": " << endl;
    cin >> Arr[iterator];
    
  }
  
}

void WriteData(int Arr[100], int Length ){
  for(int iterate = 0; iterate <= Length-1; iterate++){
    cout << "Number ["<< iterate+1 <<"]: "<< Arr[iterate] << endl;
  }
}

int CalculateArraySum(int Arr[100], int Length){
   int sum = 0;
  for(int iterate = 0; iterate <= Length-1; iterate++){
   
    sum = sum + Arr[iterate];
  }
  return sum;
}

float CalculateAvarage(int Arr[100], int Length){
  float average = 0;
  for(int iterate = 0; iterate <= Length-1; iterate++){
    average = average + Arr[iterate];
  }
  return average;
}


int main(){
  int Arr[100], Length = 0;

  ReadData(Arr,Length);
  cout << "****************************" << endl;
  WriteData(Arr, Length);
  cout << "****************************" << endl;

  cout << "Sum: " <<  CalculateArraySum(Arr,Length) << endl;
  cout << "****************************" << endl;
  cout << "Average: "<< CalculateAvarage(Arr, Length)/Length << endl;

  return 0;

}