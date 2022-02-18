#include <iostream>
using namespace std;

class cars
{
    public:
    string display(string input);
};

string display(string input)
{
    return(input);
}

int main() {

    string in;
    cout << "Enter A Word ";
    cin >> in;
    cout << "Word you entered is " << display(in);
    
return 0;
}