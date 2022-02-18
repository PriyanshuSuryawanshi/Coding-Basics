#include <iostream>
using namespace std;

int main() {

    char ch[] = {'B','a','s','i','c','\0'};
    char ch2[] = "Basics"; 
    printf("%s\n",ch);
    printf("%s\n",ch2);
    char input1[20],input2[40];
    printf("Enter single Word\n");
    gets(input1);
    // scanf("%s",&input1);
    printf("Enter A Sentence\n");
    gets(input2);

    printf("Single Word : %s\n",input1);
    printf("Sentence : %s\n",input2);

return 0;
}