#include <iostream>
using namespace std;


int main() {
  int n, sum=0;
  
  cout<<"Enter a positive integer:";
  cin>>n;
  
  for(int i=1 ;i<=n; i++){
    sum+=i;
  }
  
  cout<<"the sum of natural numbers from 1to"<<n<<"is:"<<sum<<endl;
  
    return 0;
}

