#include<stdio.h>
duplicate( int [], int);
int main()
{
    int a[10];
    duplicate(a,10);
    return 0;
}
duplicate( int b[], int size)
{
    int i, j, count=0;
    printf("Enter 10 numbers: ");
    for(i=0; i<10; i++)
        scanf("%d",&b[i]);
    for(i=0; i<9; i++)
    {
        for(j=i+1; j<10; j++)
        {
            if(b[i]== b[j])
                count++;
        }
    }
    printf("Duplicate of number is %d",count);
}
