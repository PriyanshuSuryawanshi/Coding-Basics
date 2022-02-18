#include <iostream> 
using namespace std;
  
class MyClass { 
  int x; 
public: 
  void setX(int i) { x = i; } 
  int getX() { return x; } 
}; 
 
int main() 
{ 
  MyClass obs[3]; 
  int i; 
 
  for(i=0; i < 3; i++) 
    obs[i].setX(i+10); 
 
  for(i=0; i < 3; i++) 
    cout << "obs[" << i << "].getX(): " << obs[i].getX() << "\n"; 
 
   return 0;
}