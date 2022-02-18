#include <iostream>
using namespace std;

int main() {
    float celcius,fahrenheit;
    cout << "Enter the Temperature in Fahrenheit : ";
    cin >> fahrenheit;
    celcius = (fahrenheit - 32) * 5/9;
    cout << "Temperature in Celcius is : " << celcius;

    return 0;
}