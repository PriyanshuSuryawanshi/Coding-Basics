#include <stdio.h>

int main() {
 
    float hardness,carbon_content,tensile_strength;
     
    printf("Enter Hardness of Steel (Scale 0-100)\n");
    scanf("%f",&hardness);
    printf("Enter Carbon Content (Scale 0-100)\n");
    scanf("%f",&carbon_content);
    printf("Enter Tensile Strength (Scale 1,000-10,000)\n");
    scanf("%f",&tensile_strength);

        if(hardness>50 && carbon_content>0.7 && tensile_strength>5600)
        {
            printf("Hardness Level is Grade 10\n");
        }
        else if(hardness>50 && carbon_content>0.7)
        {
            printf("Hardness Level is Grade 9\n");
        }
        else if(carbon_content>0.7 && tensile_strength>5600)
        {
            printf("Hardness Level is Grade 8\n");
        }
        else if(hardness>50  && tensile_strength>5600)
        {
            printf("Hardness Level is Grade 7\n");
        }
        else if(hardness>50 || carbon_content>0.7 || tensile_strength>5600)
        {
            printf("Hardness Level is Grade 6\n");
        }
        else 
        {
            printf("Hardness Level is Grade 5\n");
        }
return 0;
}