#include<iostream>
#include <cmath>

using namespace std;


int main(){
  int arr[10] = {10,20,44,55,33,22,99,88,99,100};
  for(int i=0; i<size(arr); i++){
    cout << "this is for loop" << endl;
    if(arr[i] == 99){
      cout << "Element found at index: " << i << endl;
      break;
    }
    cout << arr[i] << " ";
  }
	return 0;
}