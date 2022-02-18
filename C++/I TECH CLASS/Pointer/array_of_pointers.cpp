#include <iostream>
#include <conio.h>
#include <string.h>
#include <ctype.h>

using namespace std;

int main() {

    int i =0;
    char *ptr[10] = 
    {
        "books",
        "television",
        "computer",
        "sports",
    };
 char str[25],str1[25];
    cout << "\n\nEnter Your Favourite leisure pursuit : ";
    cin >> str;
    for(i=0;i<4;i++)
    {
        if(!strcmp(str,ptr[i]))
        {
            cout <<"\nYour favourite pursuit " << "is available here" << endl;
            break;
        }
    }
    if(i==4)
    {
        cout <<"\nYour favourite pursuit " << "is not available here" << endl;
    }
}