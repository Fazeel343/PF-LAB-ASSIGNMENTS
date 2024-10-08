#include <stdio.h>
void main()
{
    int n1=1,n2=2,prod;
    printf("%d, %d, ",n1,n2);
    for(int i=1;i<8;i++)
    {
        prod=n1*n2;
        printf("%d, ",prod);
        n1=n2;
        n2=prod;
    }
}