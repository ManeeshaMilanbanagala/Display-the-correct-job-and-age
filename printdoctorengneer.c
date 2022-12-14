#include<stdio.h>
int main()
{
    int age;
    int job;

    printf("Enter your age\n");
    scanf("%d",&age);

    if(age<18)
    {
        printf("Your Age is not completed\n");

    }
    else
    {
       printf("Your age is comptleted,chose the job:-Engneer,Doctor and devoloper");

       scanf("%s",&job);
       printf("Your job is\n",job);
    }
    return 0;


}