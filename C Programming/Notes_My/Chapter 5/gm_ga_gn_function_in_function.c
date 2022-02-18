#include <stdio.h>
void gm();
void ga();
void gn();


int main() {
    printf("Function initiated\n");
    gm();
return 0;
}
void gm(){
    printf("Good Morning\n");
    ga();
}
void ga(){
    printf("Good Afternoon\n");
    gn();
}
void gn(){
    printf("Good Night\n");
}