#include <iostream>
using namespace std;

int add(int a, int b){
  return a+b;
}
double add (double a, double b){
  return a+b;
}
int main() {
int intresult=add(10,20);
cout<<"sum of integers 10 and 20:"<<intresult<<endl;
  
double doubleresult=add (5.5,7.8);
cout<< "sum of double 5.5 or 7.8: " <<doubleresult<<endl;

return 0;
}

