#include <iostream>
using namespace std;

int main() {
    float km,m,cm,feet;
    cout << "Enter the Distance Between two towns in km : ";
    cin >> km;
    m = km*1000;
    feet = m*3.28;
    cm = m*100;
    cout << "\nDistance between two towns in meter "<< m;
    cout << "\nDistance between two towns in centimeter "<< cm;
    cout << "\nDistance between two towns in feet "<< feet;
return 0;
}