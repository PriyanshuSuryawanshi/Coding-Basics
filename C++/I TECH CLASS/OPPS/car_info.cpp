#include <iostream>
using namespace std;

class car
{
 public :
    string company;
    string model_name;
    int model_year;
};

int main() {

    car carobj;
   
        cout << "Enter the Company of the Car " << "\n";
        cin >> carobj.company;
        cout << "Enter the Model Name of the Car " << "\n";
        cin >> carobj.model_name;
        cout << "Enter the Model Year of the Car " << "\n";
        cin >> carobj.model_year;

        cout << "Car is " << carobj.company << " " << carobj.model_name << " " << carobj.model_year << "\n";

return 0;
}