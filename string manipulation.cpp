#include <iostream>
#include<string>
using namespace std;

int main() {
  string str = "Yasin";
  
  //concatenation
  string greeting = str + " Mughal";
  cout<< "concatenation:"<< greeting << endl ;
  
  //Substring
  string part = greeting.substr (7,6);// Extracts, "Gaikwad"
  cout<< "Substring :" << part << endl ;
  
  //find
  size_t pos = greeting.find("Mughal");
  cout<<"find: 'Mughal' found at position " <<pos<<endl; 
  
  
  //Replace 
  string replaced = greeting;
  replaced.replace(pos, 7 , "sir");
  cout<<"replace:"<<replaced << endl ;
  
  //Erase
  string erased = greeting;
  erased.erase(6,9);// removes " Mughal"
  cout<<"erase:"<<erased<<endl;
  
  // To uppercase 
  string uppercase = greeting ;
  for (char &C : uppercase)C = toupper(C);
  cout<<"to uppercase:"<<uppercase<<endl;
  
  // To lowercase 
  string lowercase = greeting ;
  for (char &C : lowercase)C = tolower(C);
  cout<<"to lowercase:"<<lowercase<<endl;
  
  
  
  
  
}