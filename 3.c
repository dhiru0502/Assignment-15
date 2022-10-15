#include<stdio.h>
sort(int [], int);
int main()
{
    int a[10];
    sort(a,10);
    return 0;
}
sort(int b[], int size)
{
    int i, j, temp;
    printf("Enter 10 numbers.\n");
    for(i=0; i<10; i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0; i<9; i++)
    {
        for(j=i; j<10; j++)
        {
            if(b[i]>b[j])
            {
                temp=b[i];
                b[i]=b[j];
                b[j]=temp;
            }
        }
    }
    printf("Sorting value is: ");
    for(i=0; i<10; i++)
        printf("%d ",b[i]);
}
