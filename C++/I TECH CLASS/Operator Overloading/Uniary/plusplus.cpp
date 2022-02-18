#include <iostream>    
using namespace std;    
class Test    
{    
   private:    
      int num;    
   public:    
       Test(): num(10){}    
       void operator ++()      
       {     
          num = num+5;     
       }    
       void Print() 
       {     
           cout<<"The Count is: "<<num;     
       }    
};    
int main()    
{    
    Test tt;    
    ++tt;  // calling of a function "void operator ++()"    
    tt.Print();    
    return 0;    
}    