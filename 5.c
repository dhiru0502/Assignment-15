#include<stdio.h>
int adjacent( int [], int);
int main()
{
    int a[10];
    printf("First adjacent duplicate value is %d",adjacent(a,10));
    return 0;
}
int adjacent( int b[], int size)
{
    int i;
    printf("Enter 10 numbers: ");
    for(i=0; i<10; i++)
        scanf("%d",&b[i]);
    for(i=0; i<9; i++)
    {
        if(b[i]== b[i+1])
          return b[i];
    }
}
