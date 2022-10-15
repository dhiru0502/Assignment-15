#include<stdio.h>
reverse( int [], int);
int main()
{
    int a[10];
    reverse(a,10);
    return 0;
}
reverse( int b[], int size)
{
    int i, n=0;
    printf("Enter 10 numbers: ");
    for(i=0; i<10; i++)
    {
        scanf("%d",&b[i]);
        n++;
    }
    printf("Array in reverse order: ");
    for(i=n-1; i>=0; i--)
        printf("%d ",b[i]);
}
