#include <iostream>  
using namespace std;  
class A  
{  
    
    int x;  
      public:  
      A(){}  
    A(int i)  
    {  
       x=i;  
    }  
    void operator+(A a1);  
    void display();  
};  
  
void A :: operator+(A a1)  
{  
     
    int m = x+a1.x;  
    cout << "The result of the addition of two objects is : " << m ;  
  
}  
int main()  
{  
    A a1(10);  
    A a2(4);  
    a1+a2;  
    return 0;  
}  