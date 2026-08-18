#inlcude<stdio.h>
int main()
{
    
    int p;
    scanf("%d",&p);
    if(p>=91)
    {
        printf("A");
    }
    else if(p>=81&&p<=90)
    {
        printf("B");
    }
    else if(p>=71&&p<=80)
    {
        printf("C");
    }
    else if(p>=61&&p<=70)
    {
        printf("D");
    }
    else
    {
        printf("E");
    }
}
