#include<stdio.h>
int smallest(int [], int);
int main()
{
    int a[10];
    printf("Smallest number is: %d",smallest(a,10));
    return 0;
}
int smallest(int b[], int size)
{
    int i, sml;
    printf("Enter 10 numbers: \n");
    for(i=0; i<=9; i++)
        scanf("%d",&b[i]);
    sml=b[0];
    for(i=0; i<=9; i++)
    {
        if(sml>b[i])
            sml=b[i];
    }
    return sml;
}
