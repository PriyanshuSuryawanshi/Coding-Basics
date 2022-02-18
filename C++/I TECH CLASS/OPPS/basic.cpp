#include <iostream>
using namespace std;

 class myclass
 {
 public : 
  int mynum;
  string mystring;
  };

int main() {
  
  myclass obj;
 obj.mynum = 123;
 obj.mystring = "Texts";

 cout << obj.mynum << "\n";
 cout << obj.mystring;

  return 0;
 }