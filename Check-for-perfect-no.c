#include <stdio.h>

int main() 
{
    int N;
    scanf("%d",&N);

    int sum=0;
    for(int i=1;i<N;i++)
    {
        if(N%i==0)
        {
            sum=sum+i;
        }
    }
  
    if(N==sum)
        {
           printf("YES");
        }
    else
        {
           printf("NO");
        }
    return 0;
}
