/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct employee{
    char id[10];
    char name[30];
};
int main()
{
    struct employee e1,e2,e3;
    struct employee *p,*p1,*p2;
    p=(struct employee*)malloc(sizeof(struct employee)*3);
    p1=(struct employee*)malloc(sizeof(struct employee)*3);
    p2=(struct employee*)malloc(sizeof(struct employee)*3);
    printf("Enter the 1stemployee details\n");
    for(int i=0;i<3;i++)
    {
        scanf("%s\n",(p+i)->id);
        scanf("%s\n",(p+i)->name);
    }
     for(int i=0;i<3;i++)
    {
        printf("the first employee id is %s\n",(p+i)->id);
        printf("the second employee name is %s\n",(p+i)->name);
    }
     printf("Enter the 2nd employee details\n");
    for(int i=0;i<3;i++)
    {
        scanf("%s\n",(p1+i)->id);
        scanf("%s\n",(p1+i)->name);
    }
     for(int i=0;i<3;i++)
    {
        printf("the first employee id is %s\n",(p1+i)->id);
        printf("the second employee name is %s\n",(p1+i)->name);
    } printf("Enter the 3rd employee details\n");
    for(int i=0;i<3;i++)
    {
        scanf("%s\n",(p2+i)->id);
        scanf("%s\n",(p2+i)->name);
    }
     for(int i=0;i<3;i++)
    {
        printf("the first employee id is %s\n",(p2+i)->id);
        printf("the second employee name is %s\n",(p2+i)->name);
    }
    

    return 0;
}
