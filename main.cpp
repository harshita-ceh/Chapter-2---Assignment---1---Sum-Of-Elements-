#include <iostream>
using namespace std;
int main() {
  int n;
  int sum;
  int arr[n];
  cout<<"Enter your choice of elements:"<<endl;
  cin>>n;
  cout<<"enter array elements"<<endl;
  for (int i=0;i<n;i++){
      cin>>arr[i];
      sum+=arr[i];
  }
  cout<<"required array="<<sum<<endl;
} 