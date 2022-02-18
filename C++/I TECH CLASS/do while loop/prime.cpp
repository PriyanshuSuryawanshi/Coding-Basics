#include <iostream>
using namespace std;

int main() {

    int i,num,prime;
    i=2,prime=1;

    cout << "Enter The Number ";
    cin >> num;
while (i < num)
    {
        if (num % i == 0)
        {   
            prime = 0;
            break;
        }
        i++;
    }
    if (prime == 0)
    {
        printf("%d is not a prime number\n", num);
    }
    else
    {
        printf("%d is a prime number\n", num);
    }

return 0;
}