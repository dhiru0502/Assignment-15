#include<stdio.h>
int main()
{
    int a[50], fre[50], i, j, c, n;
    printf("Enter Size of Array: ");
    scanf("%d",&n);
    printf("Enter Numbers in Array:\n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        fre[i]= -1;
    }
    for(i=0; i<n; i++)
    {
        c=1;
        for(j=i+1; j<n; j++)
        {
            if(a[i]==a[j])
            {
                c++;
                fre[j]=0;
            }
        }
        if(fre[i]!=0)
        {
            fre[i]=c;
        }
    }
    printf("Frequency of array Elements are....\n");
    for(i=0; i<n; i++)
    {
        if(fre[i]!=0)
        {
            printf("%d found %d times in Array\n",a[i],fre[i]);
        }
    }
    return 0;
}
