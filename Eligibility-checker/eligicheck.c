#include <stdio.h>

int main() {
    // Write C code here
    int age;
    char extra[50];
    if (scanf("%d%c", &age, &extra) != 2)
    {
        printf("Enter a number not word");
    }
    
    else if(age<=0)
    {
        printf("Enter a valid number");
    }
    else if(age>0&&age<18)
    {
        printf("You are not eligible");
    }
    else if(age>=18&&age<=60)
    {
        printf("You are eligible");
    }
    else if(age>60&&age<=75)
    {
        printf("You are eligible as senior citizen");
    }
    else
    {
        printf("You are too old");
    }

    return 0;
}
