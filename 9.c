#include<stdio.h>
int main()
{
    int a[]= {9,7,5,3,1};
    int b[]= {12,11,8,6,2};
    int c[10], k=0, i=0, j=0;

    for(k=0; k<10; k++)
    {
        if(i>=5)
        {
            while(k<10)
            {
                c[k]= b[j];
                j++;
                k++;
                if(k== 10)
                    break;
            }
        }
        else if(j>=5)
        {
            while(k<10)
            {
                c[k]= a[i];
                i++;
                k++;
                if(k== 10)
                    break;
            }
        }
        else if(a[i]>b[j])
        {
            c[k]= a[i];
            i++;
        }
        else
        {
            c[k]=b[j];
            j++;
        }
    }
    for(k=0; k<10; k++)
        printf("%d ",c[k]);
    return 0;
}
