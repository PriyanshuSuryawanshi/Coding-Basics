#include <iostream>
using namespace std;

int main() {

    FILE *fp;
    char text[50];
    fp=fopen("myfile2.txt","w");
    fputs("Helloww C Programming",fp);
    fclose(fp);

    fp=fopen("myfile2.txt","r");
    cout << fgets(text,30,fp);
    fclose(fp);

return 0;
}