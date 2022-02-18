#include <iostream>
using namespace std;

int main() {
    int s1,s2,s3,s4,s5;
    float aggregate,percentage;
    cout << "Enter The Marks in subject 1 : ";
    cin >> s1;
    cout << "Enter The Marks in subject 2 : ";
    cin >> s2;
    cout << "Enter The Marks in subject 3 : ";
    cin >> s3;
    cout << "Enter The Marks in subject 4 : ";
    cin >> s4;
    cout << "Enter The Marks in subject 5 : ";
    cin >> s5;
    aggregate = (s1+s2+s3+s4+s5);
    percentage = aggregate/5;
    cout << "Your Aggregate Marks are : " << aggregate << "\n";
    cout << "Your Percentage is : " << percentage << "\n";

return 0;
}