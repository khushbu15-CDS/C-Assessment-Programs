#include <stdio.h>
#include <string.h>
struct emp{
    char id[20];
    char name[30];
    char salary[30];
};
int main()
{
    struct emp e1,e2,e3;
    strcpy(e1.id,"1");
    strcpy(e1.name,"khush");
    strcpy(e1.salary,"100");
    printf("the details of employee are \n");
    printf("the id of the employee is %s\n",e1.id);
    printf("the name of the employee is %s\n",e1.name);
    printf("the salary of the employee is %s\n",e1.salary);
     strcpy(e2.id,"2");
    strcpy(e2.name,"abc");
    strcpy(e2.salary,"200");
    printf("the details of employee are \n");
    printf("the id of the employee is %s\n",e2.id);
    printf("the name of the employee is %s\n",e2.name);
    printf("the salary of the employee is %s\n",e2.salary);
     strcpy(e3.id,"3");
    strcpy(e3.name,"pqr");
    strcpy(e3.salary,"300");
    printf("the details of employee are \n");
    printf("the id of the employee is %s\n",e3.id);
    printf("the name of the employee is %s\n",e3.name);
    printf("the salary of the employee is %s\n",e3.salary);
    return 0;
}