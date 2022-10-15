#include<stdio.h>
unique( int [], int);
int main()
{
    int a[10];
    unique(a,10);
    return 0;
}
unique( int b[], int size)
{
    int i, j, count=0;
    printf("Enter 10 numbers: ");
    for(i=0; i<10; i++)
        scanf("%d",&b[i]);

    for(i=0; i<10; i++)
    {
        count=0;
        for(j=0; j<10; j++)
        {
            if(i!=j)
            {
            if(b[i]== b[j])
                 count++;
            }
        }
        if(count==0)
            printf("%d ",b[i]);

    }

}
