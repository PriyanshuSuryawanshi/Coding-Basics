// #include <iostream>
// using namespace std;

// class car
// {
//  public :
//     string company;
//     string model_name;
//     int model_year;
// };

// int main() {

//     car carobj[2];
//     for(int i=0;i<2;i++)
//     {
//         cout << "Enter the Company of the Car " << i+1 << "\n";
//         cin >> carobj->company[i];
//         cout << "Enter the Model Name of the Car " << i+1 << "\n";
//         cin >> carobj->model_name[i];
//         // cout << "Enter the Model Year of the Car " << i << "\n";
//         // cin >> car->model_year[i] ;
//     }

//     for(int i=0;i<2;i++)
//     {
//         cout << "Company of the Car " << i+1 << carobj->company[i] << "\n";
//         cout << " Model Name of the Car " << i+1 << carobj->model_name[i] << "\n";
//         // cout << "Enter the Model Year of the Car " << i << "\n";
//         // cin >> car->model_year[i] ;
//     }


// return 0;
// }

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
    int i;
    car carobj[2];

        for(i=0;i<2;i++)
        {
        cout << "Enter the Company of the Car " << "\n";
        cin >> carobj->company[i];
        cout << "Enter the Model Name of the Car " << "\n";
        cin >> carobj->model_name[i];
        cout << "Enter the Model Year of the Car " << "\n";
        cin >> carobj->model_year[i];
        }

        for(i=0;i<2;i++)
        {
        cout << "Car is " << carobj->company[i] << " " << carobj->model_name[i] << " " << carobj->model_year[i] << "\n";
        }

return 0;
}