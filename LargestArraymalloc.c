#include <stdio.h>
#include <stdlib.h>
int main()
{
    
    int *p;
    int n;
    p=(int *)malloc(sizeof(int)*5);
    printf("enter the elements of array");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",(p+i));
    }
    printf("\n");
    for(int i=0;i<n;i++)
    {
        if(*(p)<*(p+i))
        {
            *(p)=*(p+i);
        }
    }
    printf("%d\n",*(p));
   return 0;
}
