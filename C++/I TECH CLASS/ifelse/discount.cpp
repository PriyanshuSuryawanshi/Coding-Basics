#include <iostream>
using namespace std;

int main() {

    float quantity,price,bill,discount;
    cout << "Enter the Quantity of Products you want :\n";
    cin >> quantity;
    cout << "Enter the Price of that Product :\n";
    cin >> price;

    if(quantity>=1000)
    {
        bill = (quantity*price);
        discount=(quantity*price)*0.10;
        cout << "Your Bill is Rs." << bill-discount ;
    }
    else
    {
        bill = (quantity*price);
        cout << "Your Bill is Rs." << bill ;
    }


return 0;
}