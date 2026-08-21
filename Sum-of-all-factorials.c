#include<stdio.h>
int main()
{
int N;
scanf("%d",&N);
  
int fact=1;
int sum=0;
    for(int i=1;i<=N;i++)
    {
        fact=fact*i;
        sum=fact+i;
    }
    printf("%d",sum);
}
