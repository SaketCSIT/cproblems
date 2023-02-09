#include <stdio.h>
int main(int argc, char const *argv[])
{
    int number1, number2, result;
    int a, times;
    printf("How Many Times You Want To Use Calculator\n");
    scanf("%d", &times);

    for (int i = 0; i < times; i++)
    {
        printf("Enter The First Number\n");
        scanf("%d", &number1);
        printf("Enter The Second Number\n");
        scanf("%d", &number2);
        printf("1 is for addition\n2 is for subtraction\n3 is for multiplication");
        printf("Enter The Operation");
        scanf("%d", &a);
        if (a == 1)
        {
            result = number1 + number2;
            printf("Resultant Is %d", result);
        }
        else if (a == 2)
        {
            result = number1 - number2;
            printf("Resultant Is %d", result);
        }
        else if (a == 3)
        {
            result = number1 * number2;
            printf("Result is %d", result);
        }
    }

    return 0;
}
