// Xor of array
#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  int start;
  cin>>start;
  int nums[n];
  int xor_arr=0;
  for(int i=0;i<n;i++){
    nums[i] = start+2*i;
    xor_arr = xor_arr^nums[i];
  }
  cout<<xor_arr;
}
