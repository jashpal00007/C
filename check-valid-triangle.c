#include<stdio.h>
int main()

{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int total=a+b+c;
    
    if(total==180)
    {
        printf("Valid");
    }
    else
    {
        printf("Invalid");
    }
}
