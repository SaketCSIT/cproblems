#include<stdio.h>
#include<conio.h>
int main(int argc, char const *argv[])
{
    int a;
    printf("Enter the Number");
    scanf("%d",&a);
    if(a>0)
    {
        printf("%d Number Is Positive\n",a);
    }
    else
    {
        printf("%d Number is Not Positive\n",a);
    }

    return 0;
}
