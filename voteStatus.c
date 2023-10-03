#include <stdio.h>
int main(void)
{
    int age;
    printf("Please enter your age : ");
    scanf("%d",&age);

    if(age>0 && age<110)
    {
        if(age>=18)
        {
            printf("You can vote");
        }
        else
            printf("You can't Vote");
    }
    else
        printf("Invalid Entress");

    return 0;
}
