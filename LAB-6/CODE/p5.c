#include <stdio.h>
void main()
{
    int t1=65536;
    for(int i=2;i<=10;i++)
    {
        printf("%d, ",t1);
        t1/=i;
    }   
}