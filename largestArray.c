#include <stdio.h>

int main()
{
    int i,n;
    int a[3];
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter the %d element \n",i);
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++)
    {
        if(a[0]<a[i])
        a[0]=a[i];
    }
    printf("Largest number is %d",a[0]);

    return 0;
}