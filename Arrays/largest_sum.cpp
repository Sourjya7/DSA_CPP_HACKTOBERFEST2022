// Find the largest sum of contigious sub array
#include<iostream>
using namespace std;


void sumArray(int arr[], int n){
  int count = 0;
  int track = 0;
  int sum = 0;//max_sum
  for(int i=0;i<n; i++){
    count = count + arr[i];
    if(sum < count){
      sum = count;
    }
    if(count < arr[i]){
      count = arr[i];
    }
  }
  cout<<"Largest num is : "<<sum<<endl;
  cout<<"Smallest num is : "<<track<<endl;
}
int main(){
  int arr [] = {1,2,3,-1};
  int n = sizeof(arr)/sizeof(arr[0]);
  sumArray(arr,n);
  return 0;
}