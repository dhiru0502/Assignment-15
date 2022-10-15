#include<stdio.h>
int greatest(int [], int);
int main()
{
    int a[10];
    printf("Greatest number is: %d",greatest(a,10));
    return 0;
}
int greatest(int b[], int size)
{
    int i, gr=0;
    printf("Enter 10 numbers: \n");
    for(i=0; i<=9; i++)
    {
        scanf("%d",&b[i]);
        if(b[i]>gr)
            gr=b[i];
    }
    return gr;
}
