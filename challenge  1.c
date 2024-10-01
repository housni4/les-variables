#include <stdio.h>
int main()
{
char lastName[50],sex[10],firstName[30];
int age;
printf("entre you last name:");
scanf("%s",lastName);
printf("\nEntre your age:");
scanf("%d",&age);
printf("\nEntre your sex(male/female):");
scanf("%s",&sex);
printf("\n===yourdetails:===\n");
printf("last Name:%s\n",lastName);
printf("first Name:%s\n",firstName);
printf("age:%d\n",age);
printf("sex:%s\n",sex);




  return 0;
}

