#include <iostream>
using namespace std;

int main() {

    float tsp,tp,scp;//tsp=total selling price,tp=total profit earned,tc=total cost price
    cout << "Enter the total selling price of 15 items : ";
    cin >> tsp;
    cout << "Enter the Total Profit earned on 15 items : ";
    cin >> tp;
    scp = (tsp-tp)/15;
    cout << "Cost Price Of Single Product is "<< scp ;
return 0;
}